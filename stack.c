#include<stdio.h>
#include<conio.h>

int isempty(int top) {
    return top == -1;
}

void pop(int stack[], int* top) {
    if (!isempty(*top)) {
        int temp = stack[(*top)--];
        printf(" pop value is : %d \nchoose your options again\n", temp);
    } else {
        printf("stack is already empty");
    }
}

int isfull(int size, int top) {
    return top == size - 1;
}

void push(int stack[], int size, int* top, int n) {
    if (!isfull(size, *top)) {
        stack[++(*top)] = n;
        printf("\n data successfully inserted\n choose your options again\n");
    } else {
        printf("\n stack is full");
    }
}

int main() {
    int stack[5], size = 5, top = -1, n;
    char choice;
     printf("enter your choice ->\n");
        printf("a: for push operation\n");
        printf("b: for pop operation\n");
        printf("c: for exit\n");
    while (1) {
        
       
        scanf(" %c", &choice);
        switch (choice) {
        case 'a':
            printf("enter the number to push->");
            scanf("%d", &n);
            push(stack, size, &top, n);
            break;
        case 'b':
            pop(stack, &top);
            break;
        case 'c':
            return 0;
        default:
            printf("invalid choice");
            break;
        }
        
    }
}

