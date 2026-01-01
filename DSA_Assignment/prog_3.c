#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* createNode(int value)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void reverseTraversal(struct Node *head)
{
    if (head == NULL)
    {
        return;
    }
    reverseTraversal(head->next);
    printf("%d ", head->data);
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = createNode(10);
    second = createNode(20);
    third = createNode(30);

    head->next = second;
    second->next = third;

    printf("Reverse Traversal: ");
    reverseTraversal(head);

    return 0;
}
