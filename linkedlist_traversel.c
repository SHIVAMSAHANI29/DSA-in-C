#include<stdio.h>
#include<stdlib.h>

// |7|*|--|8|*|--|11|*|->NULL 
struct Node
{
    int data;
    struct Node * next;
};
void LinkedlistTraversal(struct Node *ptr)
{
    while(ptr != NULL){
    printf("Elements : %d\n ", ptr->data);
    ptr = ptr->next ;
  }
}

int main(){

    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    //Allocate dynamic memory for the linked list in Heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
     
    //Link first and second node
    head->data = 7;
    head->next = second;

    //Link second and third node
    second->data = 11;
    second->next = third;

    //link third and fourth node
    third->data = 13;
    third->next = fourth;

    //terminate the list at the end of node
    fourth->data = 15;
    fourth->next = NULL;
    
   LinkedlistTraversal(head);
    return 0;
}