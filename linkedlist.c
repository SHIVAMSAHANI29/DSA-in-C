// HEAD
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
int main(){
    // Creates Nodes 
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // Allocates memory for nodes in the linked list in Heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Check allocation
    if (!head || !second || !third) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assigns data to the nodes
    head->data = 10;
    second->data = 20;
    third->data = 30;

    // Links the nodes together
    head->next = second;
    second->next = third;
    third->next = NULL;
    struct Node *current = head;
    
while (current != NULL) {
    printf("%d -> ", current->data);
    current = current->next;
}
printf("NULL\n");

    return 0;
}
