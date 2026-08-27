#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
void insertAtPosition(struct Node** head, int data, int position) {
    if (position <= 0) {
        printf("Invalid position!\n");
        return;
    }
    struct Node * newNode ;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = data;
    newNode->next = NULL;

    // Insert at the beginning
    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;

    // Move to the node before the required position
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // Position is invalid
    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newNode);
        return;
    }

    // Insert the new node
    newNode->next = temp->next;
    temp->next = newNode;
}

// void insertAtPosition(struct Node** head, int data, int position) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;

//     // Insert at the beginning
//     if (position == 1) {
//         newNode->next = *head;
//         *head = newNode;
//         return;
//     }

//     struct Node* temp = *head;

//     // Move to the node before the required position
//     for (int i = 1; i < position - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }

//     // Position is invalid
//     if (temp == NULL) {
//         printf("Invalid position!\n");
//         free(newNode);
//         return;
//     }

    // Insert the new node
//     newNode->next = temp->next;
//     temp->next = newNode;
// }
// struct Node(int value){
//  struct Node * newNode;
//     struct Node * temp;
// };
// void InsertPosition(int value,int position){
   
//     int i;
//     newNode = (struct Node *)malloc(Sizeof(struct Node));
//     newNode->data = value;
//     temp = head ;

//     for(int i 1;,i<position-1 && temp != NULL;i++){
//         temp = temp->next;

//     }
//     if (temp==NULL){
//         printf("Invalid Position\n");
//         return ;
//     }
//     newNode->next = temp->next ;
//     temp->next = newNode ;
// }