#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
};


int main() {
    struct node *head, *newNode, *newNode3, *newNode4, *temp;
    head = (struct node *) malloc (sizeof(struct node));
    newNode = (struct node *) malloc (sizeof(struct node));
    newNode3 = (struct node *) malloc (sizeof(struct node));
    newNode4 = (struct node *) malloc (sizeof(struct node));
    temp = (struct node*) malloc (sizeof(struct node));

    head -> data = 45;
    newNode -> data = 98;
    newNode3 -> data = 3;
    newNode4 -> data = 67;

    head -> next = newNode;
    newNode -> next = newNode3;
    newNode3 -> next = newNode4;
    newNode4 -> next = NULL;

    temp = head;
    // insert before head
    temp = head;
    temp -> next = head;
    
    while (temp != NULL) {
        printf("%d -> ", temp -> data);
        temp = temp->next;
    }

    return 0;
}