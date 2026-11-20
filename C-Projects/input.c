#include <stdio.h>
#include <string.h>

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
    scanf(" %c", &grade);

    getchar();
    printf("Enter your Name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("\n========Results========\n");
    printf("Your Name is %s\n", name);
    printf("You are age %d years old\n", age);
    printf("You have a GPA of %f\n", gpa);
    printf("You have a mean Grade of %c\n", grade);


    return 0;

}