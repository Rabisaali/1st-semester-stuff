#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* read_string() {
    char buffer[100];
    printf("Enter the string: ");
    scanf("%s", buffer);

    char* str = (char*)malloc(strlen(buffer) + 1);
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    strcpy(str, buffer);
    return str;
}

int main() {
    char* str1 = read_string();
    char* str2 = read_string();
    if (str1 == NULL || str2 == NULL) {
        free(str1);
        free(str2);
        return 1;
    }

    //Concatenate them into one dynamically allocated string
    int total_len = strlen(str1) + strlen(str2);
    char* current_str = (char*)malloc(total_len + 1);
    if (current_str == NULL) {
        printf("Memory allocation failed!\n");
        free(str1);
        free(str2);
        return 1;
    }
    strcpy(current_str, str1);
    strcat(current_str, str2);

    free(str1);
    free(str2);

    printf("Initial concatenated string: %s\n", current_str);

    char buffer[100];
    while (1) {
        printf("Enter another string (or 'Q' to quit): ");
        scanf("%s", buffer);

        if (strcmp(buffer, "Q") == 0) break;

        int new_len = total_len + strlen(buffer);
        char* temp = realloc(current_str, new_len + 1); // +1 for '\0'
        if (temp == NULL) {
            printf("Memory reallocation failed!\n");
            free(current_str);
            return 1;
        }

        current_str = temp;
        strcat(current_str, buffer);  // append new input
        total_len = new_len;

        printf("Current concatenated string: %s\n", current_str);
    }

    //Final output
    printf("\nFinal concatenated string: %s\n", current_str);

    //Cleanup
    free(current_str);

    return 0;
}