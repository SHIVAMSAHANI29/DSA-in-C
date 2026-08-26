#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;

};
struct Node*head = NULL;
//function to insert at begining
void Insert_Begining(int value){
    struct Node* newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = head;
    head = newNode;
}