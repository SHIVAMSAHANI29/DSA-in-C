<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next ;
    };
    
  struct Node *head = NULL;
void insertEnd(int value)
{
    struct Node *newNode, *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
=======
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next ;
    };
    
  struct Node *head = NULL;
void insertEnd(int value)
{
    struct Node *newNode, *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
>>>>>>> 5c5059057388a49198fdf61fe835b9efb5cbb2c1
}