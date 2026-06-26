#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct item {
    char name[20];
    int price;
    int quantity;
    char cheapness[20];
};

struct Newitems {
    struct item items[8];
};

struct Newitems get_info (struct item* items[], int n, char Cheapness[], int len);

int main () {
    struct item items[8];

    strcpy(items[0].name, "shampoo");
    items[0].price = 300;
    items[0].quantity = 5;
    strcpy(items[0].cheapness, "EXPENSIVE");

    strcpy(items[1].name, "soap");
    items[1].price = 50;
    items[1].quantity = 6;
    strcpy(items[1].cheapness, "MODERATE");

    strcpy(items[2].name, "detergent");
    items[2].price = 10;
    items[2].quantity = 4;
    strcpy(items[2].cheapness, "CHEAP");

    strcpy(items[3].name, "pencil");
    items[3].price = 5;
    items[3].quantity = 10;
    strcpy(items[3].cheapness, "CHEAP");

    strcpy(items[4].name, "eraser");
    items[4].price = 4;
    items[4].quantity = 20;
    strcpy(items[4].cheapness, "CHEAP");

    strcpy(items[5].name, "cups");
    items[5].price = 30;
    items[5].quantity = 4;
    strcpy(items[5].cheapness, "MODERATE");

    strcpy(items[6].name, "plates");
    items[6].price = 15;
    items[6].quantity = 30;
    strcpy(items[6].cheapness, "CHEAP");

    strcpy(items[7].name, "chips");
    items[7].price = 5;
    items[7].quantity = 20;
    strcpy(items[7].cheapness, "CHEAP");

    char Cheapness[20];
    printf("Enter the cheapness level in caps: ");
    scanf("%s", Cheapness);
    int len = strlen(Cheapness);


}

struct Newitems get_info (struct item* items, int n, char Cheapness[], int len) {
    int i=0;
    struct Newitems* Items = (struct Newitems *) malloc(1*sizeof(struct Newitems));
    while (n>0) {
        if (strcmp(items[i].cheapness, Cheapness)==0) {
            struct Newitems* Items[i].
        }
        n--;
    }
}