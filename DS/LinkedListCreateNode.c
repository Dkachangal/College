#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node * next;
};
struct Node * newNode(int data) {
    // Create a new Node
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}

// create node function 
struct Node * createNode (int data) {
    struct Node * node = (struct Node *) malloc (sizeof(struct Node));
    node -> data = data;
    printf("create node function used \n\n");
    node -> next = NULL;
    return node;
}

// traverse
void traverseNode(struct Node * head) {
    while (head != NULL) {
        printf("%d", head -> data);
        head = head -> next;
    }
}
// linked list traversal
struct Node * traverse(struct Node * head) {
    struct Node * current = head;
    while (current -> next != NULL) {
        printf("%d", current->data);
        current = current -> next;
    }

}
struct myStruct {
    int data;
    struct myStruct * next;
};

// traversal function
void trav(struct Node * head) {
    struct Node * current = head;
    while (head -> next != NULL) {
        printf("%d", head->data);
        printf("Cycle one done\n");
        head = head -> next;
    }
    if (head -> next == NULL) {
        printf("NULL FOUND\n");
    }

}
int main() {

    createNode(10);
    createNode(20);

    traverseNode(createNode(10));
    printf("\n");

    struct Node *p, *q, *r, *s, *t;
    p = createNode(10);
    q = createNode(20);
    r = createNode(30);
    s = createNode(40);
    t = createNode(50); 

    p -> next = q;
    q -> next = r;
    r -> next = s;
    s -> next = t;
    t -> next = NULL;

    struct Node * temp;
    temp = p;
    while (temp!= NULL) {
        printf("%d", temp->data);
        temp = temp -> next;
    }

    newNode(10);
    traverse(newNode(10));
    printf("\n\n\n\n\n");
    struct Node *head;
    head = (struct Node*) malloc(sizeof(struct Node));

    trav(p);

    return 0;
}