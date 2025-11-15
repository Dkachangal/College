#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node* fourth;

    // allocate memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));

    // link first to second
    head->data = 1;
    head->next = second;

    // link second to third
    second->data = 10;
    second->next = third;

    // link third to NULL
    third->data = 100;
    third->next = fourth;

    // link fourth to NULL
    fourth-> data = 1000;
    fourth -> next = NULL;

    linkedListTraversal(head);
    return 0;
}