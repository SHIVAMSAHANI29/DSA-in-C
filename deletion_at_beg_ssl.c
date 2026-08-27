#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data ;
    struct Node *next;

};
int main(){
struct Node  *head , *newNode,*temp;

//create first Node
head = (struct Node*)malloc(sizeof(struct Node));
head->data = 10;

newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = 20;
head->next = newNode;

newNode= (struct Node*)malloc(sizeof(struct Node));
newNode->data = 30;
head->next->next = newNode;
head->next->next->next = NULL;

printf("Before Deletion\n");
temp = head;

while(temp != NULL){
    printf("%d -> ",temp->data);
    temp = temp->next;
}
printf("NULL\n");

//Delete first Node
temp = head;
head = head->next;
free(temp);

//Display after deletion

printf("\n After Deletion from begning :\n");
temp = head;
while(temp != NULL ){
    printf("%d -> ",temp->data);
    temp = temp->next;
}
printf("NULL\n");

return 0;
}