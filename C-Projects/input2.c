#include <stdio.h>
#include <string.h> // Needed for strcspn to clean up the name string

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = " ";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // FIX 1: Removed the trailing \n and spaces

    // FIX 2: This loop completely clears the input buffer (removes the leftover Enter key)
    while (getchar() != '\n'); 

    printf("Enter your Name: ");
    fgets(name, sizeof(name), stdin);
    
    // FIX 3: fgets includes the "Enter" key in your string. This line removes it so formatting stays clean.
    name[strcspn(name, "\n")] = '\0';

    printf("\n========Results========\n");
    printf("Your Name is: %s\n", name);
    printf("You are %d years old\n", age);
    printf("You have a GPA of %.1f\n", gpa);
    printf("You have a mean Grade of %c\n", grade);

    return 0;
}
