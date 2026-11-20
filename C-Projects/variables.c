#include <stdio.h>
#include <stdbool.h>

int main(){

    bool isOnline = true; 
    bool isStudent = true;

    if (isOnline & isStudent)
    {
        printf("You are ONLINE!!!");

    }
    else
    {
        printf("You are OFFLINE!!!");
    }
    
    

    return 0;
}