#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node **head_ref, int new_data)
{
    // 1. allocate node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    // 2. put in the data
    new_node->data = new_data;

    //3. Make next of new node as head
    new_node->next = (*head_ref);

    //4. move the head to point to the new node
    (*head_ref) = new_node;
}

void add_node_end(struct Node **head_ref, int new_data)
{

    // 1. Allocate Node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;

    //2. Put in the data
    new_node->data = new_data;

    /*3. This new Node is going to be
    the last node, so make next NULL*/
    new_node->next = 0;

    //4. If the Linked List is empty, them make new node as head
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    //5. else transverse till the last node
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}

void printList(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d \n", n->data);
        n = n->next;
    }
}

void main()
{
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *secnd = malloc(sizeof(struct Node));

    /* head = (struct Node*)malloc(sizeof(struct Node));
    secnd = (struct Node*)malloc(sizeof(struct Node));*/

    head->data = 1;
    head->next = secnd;

    secnd->data = 456;
    secnd->next = 0;

    printList(head);

    //push(&head, 10);

    printf("\n");

    add_node_end(&head, 123);

    printList(head);
}
