#include <stdio.h>
#include <stdlib.h>
#include <mach-o/loader.h>

void check_binary(const char *filename) {
    FILE *f = fopen(filename, "rb");
    if (!f) {
        perror("Could not open file");
        return;
    }

    // Read the Mach-O magic number to determine architecture (32-bit vs 64-bit)
    uint32_t magic;
    if (fread(&magic, sizeof(uint32_t), 1, f) != 1) {
        fclose(f);
        return;
    }
    rewind(f);

    int is_64bit = (magic == MH_MAGIC_64 || magic == MH_CIGAM_64);

    if (is_64bit) {
        struct mach_header_64 header;
        if (fread(&header, sizeof(struct mach_header_64), 1, f) != 1) {
            fclose(f);
            return;
        }

        printf("--- Binary: %s (64-bit) ---\n", filename);
        printf("Flags: 0x%X\n", header.flags);

        // Check for PIE (Position Independent Executable - enables ASLR)
        if (header.flags & MH_PIE) {
            printf("[+] PIE (ASLR): ENABLED\n");
        } else {
            printf("[-] PIE (ASLR): DISABLED\n");
        }

    } else {
        struct mach_header header;
        if (fread(&header, sizeof(struct mach_header), 1, f) != 1) {
            fclose(f);
            return;
        }

        printf("--- Binary: %s (32-bit) ---\n", filename);
        printf("Flags: 0x%X\n", header.flags);

        if (header.flags & MH_PIE) {
            printf("[+] PIE (ASLR): ENABLED\n");
        } else {
            printf("[-] PIE (ASLR): DISABLED\n");
        }
    }

    fclose(f);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <path_to_binary>\n", argv[0]);
        return 1;
    }
    check_binary(argv[1]);
    return 0;
}