#include<stdio.h>
#include<stdlib.h>
//structure of node
struct Node {
    int data;
    struct Node* next;
};
//Function to insert at begining
    struct Node* insertAtbegining(struct Node *head, int data) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = head;
        head = newNode;
        return head;
    }
    //Function to display the linked list
    void display(struct Node* head) {
        struct Node* current = head;
        while (current != NULL) {
            printf("%d -> ", current->data);
            current = current->next;
        }
        printf("NULL\n");
    }
      int main() {
        struct Node* head = NULL;
        head = insertAtbegining(head, 30);
        head = insertAtbegining(head, 20);
        head = insertAtbegining(head, 10);
        printf("Linked List after insertion at beginning: ");
        display(head);
        return 0;
      }