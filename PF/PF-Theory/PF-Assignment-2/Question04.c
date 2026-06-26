#include <stdio.h>

int top = 0;
void push(int size, int stack[size], int* top);
void pop(int stack[], int* top);
void peek(int stack[], int top);
void display(int stack[], int top);

int main () {
    
    int size;
    printf("Declare the size of the stack: ");
    scanf("%d", &size);
    int stack[size];

    //initializing the stack to 0
    for (int i=0; i<size; i++) {
        stack[i] = 0;
    }

    printf("\n----Implementation of Stack----\n");
    int Continue; 

    do {
        int choice;
        printf("\nTo PUSH(Insert an element to the stack) press 1\nTo POP(Remove the top element from the stack) press 2\nTo PEEK(Display the top element without removing it) press 3\nTo DISPLAY(Show all elements currently in the stack) press 4\nTo EXIT(Terminate the program) press 5\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push(size, stack, &top);
                break;
            case 2:
                pop(stack, &top);
                break;
            case 3:
                peek(stack, top);
                break;
            case 4:
                display(stack, top);
                break;
            case 5:
                printf("Program terminating.....\n");
                return 0;
            default:
                printf("Enter a valid code!\n");    
        
        }
        printf("\nPress 1 to continue\nPress 0 to exit\n");
        scanf("%d", &Continue);
    } while (Continue == 1);
    return 0;
}

void push(int size, int stack[size], int* top) {
    if (*top == size) {
        printf("\nStack Overflowed\n");
        return;
    }
    int element;
    printf("\nEnter the element that you want to insert into the stack: ");
    scanf("%d", &element);
    stack[*top] = element;
    (*top)++;
    printf("Element inserted into the stack!\n");
    return;
}

void pop(int stack[], int* top) {
    if (*top == 0) {
        printf("\nStack Underflowed\n");
        return;
    }
    (*top)--;
    stack[*top] = 0;

    printf("\nTop element removed from the stack\n");
    return;
}

void peek(int stack[], int top) {
    if (top == 0) {
        printf("The stack is empty\n");
        return;
    }
    printf("\nThe top element in the stack is:\n");
    printf("%d", stack[top-1]);
    return;
}

void display(int stack[], int top) {
    printf("\nDisplaying the stack---\n");
    if (top == 0) {
        printf("The stack is empty\n");
        return;
    }
    for (int i=top-1; i>=0; i--) {
    //since top is being incremented after the push function; therefore, top-1
        printf("%d ", stack[i]);
    }
    printf("\n");
    return;
}