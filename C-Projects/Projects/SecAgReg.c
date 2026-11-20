#include <stdio.h>
#include <string.h>

int main(){

    char Codename[50] = "";
    int AgentID = 0;

    printf("What is your Codename?: ");

    fgets(Codename, sizeof(Codename), stdin);
    
    Codename[strcspn(Codename, "\n")] = '\0';

    printf("What is your AgentID?: ");
    scanf("%d", &AgentID);

    printf("Your Codename is %s and your AgentID is %d", Codename,AgentID);

//}