#include<stdio.h>
#include<stdlib.h>
struct Stack {
    int size;
    int top;
    int *arr;
};

void isEmpty (struct Stack* ptr) {
    if (ptr->top == -1) {
        printf("Stack is empty");
    } else {
        printf("Stack is not empty");
        // printf("%d", ptr->top);
    }
}
void printStack (struct Stack *ptr) {
    while (ptr->top != -1) {
        printf("%d\t", ptr->arr[ptr->top]);
        ptr->top = ptr->top-1;
    }
}
int main () {
    struct Stack* s;
    int n;
    printf("Enter size of n: ");
    scanf("%d", &n);
    s = (struct Stack*) malloc(sizeof(struct Stack));
    s->size = n;
    s->top = -1;
    for (int i=0; i<n; i++) {
        int x;
        printf("Enter element: ");
        x= scanf("%d", &x);
        s->arr[i] = x;
        s->top++;
    }
    isEmpty(s);
    printStack(s);
    return 0;
}