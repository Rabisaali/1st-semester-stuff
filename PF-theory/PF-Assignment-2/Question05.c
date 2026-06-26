#include <stdio.h>
#include <string.h>
void encodeMessage(char message[], int length);
void decodeMessage(char message[], int length);

int main () {

    printf("\n----Welcome to TCS----\n");
    char message[50];

    int choice;
    do {
        //displaying menu
        printf("\nTo encode a message press 1\nTo decode a message press 2\nTo exit the program press 3\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                //encoding the message
                printf("\nEnter your message: ");
                scanf("%[ a-zA-Z]", message);
                int length = strlen(message);
                encodeMessage(message, length);
                break;
            case 2:
                //decoding the message
                int option;
                printf("To decode previous encoded message enter 1\nTo decode a new message enter 2\n");
                scanf("%d", &option);
                if (option==1) {
                    decodeMessage(message, length);
                }
                else {
                    printf("\nEnter your message: ");
                    scanf("%[ a-zA-Z]", message);
                    int length = strlen(message);
                    decodeMessage(message, length);
                }  
                break;
            case 3:
                //exiting the program
                printf("----Exiting program----");
                return 0;
            default:
                printf("Enter a valid code\n");
        }
    } while (choice != 3);

    return 0;
}

void encodeMessage(char message[], int length) {
    //declaring a temporary array
    char temp[length+1];
    //reversing the elements
    for (int i=0; i<length; i++) {
        temp[i] = message[length-1-i];
    }
    temp[length] = '\0';

    //copying the array into the previous array
    for (int i=0; i<length; i++) {
        message[i] = temp[i];
    }
    
    //toggling the bits
    for (int i=0; i<length; i++) {
        message[i] ^= 2;
        message[i] ^= 16;
    }
    printf("Encoded message: %s\n", message);
    return;
}

void decodeMessage(char message[], int length) {
    //retoggling the bits
    for (int i=0; i<length; i++) {
        message[i] ^= 2;
        message[i] ^= 16;
    }
    //declaring a temporary array
    char temp[length+1];
    for (int i=0; i<length; i++) {
        temp[i] = message[length-1-i];
    }
    temp[length] = '\0';

    //copying the array into the previous array
    for (int i=0; i<length; i++) {
        message[i] = temp[i];
    }
    printf("Decoded message: %s\n", message);
    return;
}