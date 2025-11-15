#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int coffe;
    int exp;
    int data;
    struct Node *next;
};

void linkedListDel(struct Node *ptr, int del)
{
    while (ptr != NULL)
    {
        if (ptr->data == del)
        {
            ptr = ptr->next;
        }
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void linkedListPrint(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    int del = 3;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    second->data = 2;
    third->data = 3;

    head->next = second;
    second->next = third;
    third->next = NULL;

    linkedListDel(head, del);
    printf("\n\n\n");
    linkedListDel(head, del);
    printf("\n%d", second->data);

    return 0;
}