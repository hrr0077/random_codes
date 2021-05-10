#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void printList(struct Node* n)
{
    while(n!= NULL)
    {
        printf("%d \n",n->data);
        n = n->next;
    }

}

void main()
{
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* secound = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next= secound;

    secound->data=20;
    secound->next= NULL;

    printList(head);
}