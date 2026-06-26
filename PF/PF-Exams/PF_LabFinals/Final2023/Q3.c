#include <stdio.h>
#include <string.h>

typedef struct GameCharacter {
    char name[80];
    int HP;
    int AP;
    int DP;
} charc;

int main () {
    charc list[50];
    int count = createCharacters(list, 50);
    DisplayCharacters(list, count);
    BattleSimulation(list, count);
}

int createCharacters(charc* list, int max) {
    char choice;
    printf("To stop entering the chaarcters enter e to continue enter any other character: ");
    scanf(" %c", &choice);
    int i=0;
    while (choice != 'e') {
        printf("Enter the name of character: ");
        scanf("%s", list[i].name);
        printf("Enter HP, AP, and DP: ");
        scanf("%d %d %d", &list[i].HP, &list[i].AP, &list[i].DP);
        i++;
        if (i==max) break;    
        printf("To stop entering the chaarcters enter e to continue enter any other character: ");
        scanf(" %c", &choice);
    }
    return i;
}

void DisplayCharacters(charc* list, int count) {
    for (int i=0; i<count; i++) {
        printf("Character %d\nName: %s\nHP: %d\nAP: %d\nDP: %d\n", i+1, list[i].name, list[i].HP, list[i].AP, list[i].DP);
    }
    return;
}

void BattleSimulation(charc* list, int count) {
    char name1[80], name2[80];
    printf("Enter the name of first character: ");
    scanf("%s", name1);
    printf("Enter the name of second character: ");
    scanf("%s", name2);
    int a,b;
    for (int i=0; i<count; i++) {
        if (strcmp(name1, list[i].name)==0) a=i;
        else if (strcmp(name2, list[i].name)==0) b=i;
    }
}