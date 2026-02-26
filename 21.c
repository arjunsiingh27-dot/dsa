#include<stdio.h>
#include<stdlib.h>
struct node {
   int data;
   struct node *next;
};

int main(){
   int n, i, value;
   struct node *head = NULL, *temp = NULL , *newNode = NULL;
   printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newNode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
