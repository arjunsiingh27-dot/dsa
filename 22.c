#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int countnodes(struct node *head) {
    int count = 0;
    struct node *current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}
int main(){
    struct node *head, *second,*third;
    int count =0;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    head -> data = 10;
    head -> next = second;
    second -> data = 20;
    second -> next = third;
    third -> data = 30;
    third -> next = NULL;
    printf("%d->%d->%d->NULL\n",head -> data,second -> data,third -> data);
    printf("count: %d\n",countnodes(head));
    return 0;
}
