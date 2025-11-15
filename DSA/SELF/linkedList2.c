#include<stdio.h>
#include<stdlib.h>
struct node {
    char data;
    struct node* next;
};
void lLT(struct node* ptr) {
    while (ptr!=NULL) {
        printf("%c\t", ptr->data);
        ptr = ptr-> next;
    }
}
int main() {
    struct node *head;
    struct node* a;
    struct node* b;
    struct node* c;
    struct node* x;

    head = (struct node*) malloc(sizeof(struct node));
    a = (struct node*) malloc(sizeof(struct node));
    b = (struct node*) malloc(sizeof(struct node));
    x = (struct node*) malloc(sizeof(struct node));

    head -> data = 'a';
    head -> next = a;

    a -> data = 'b';
    a -> next = b;

    
    b -> data = 'c';
    b -> next = x;
    
    x ->data = 'x';
    x -> next = NULL;


    lLT(head);
    return 0;
}