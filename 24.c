#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next;
};
int main(){
    struct node *newnode=NULL,*temp=NULL,*head=NULL,*prev = NULL;
    int n,val;
    printf("enter the number of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the value: ");
        scanf("%d",&val);
        newnode -> data = val;
        newnode -> next = NULL;
        if(head==NULL){
           head = newnode;
           temp = newnode;
        }else{
            temp->next = newnode;  
            temp = newnode;
        }
    }
    int key;
    printf("enter the value of key: ");
    scanf("%d",&key);
    while(head != NULL && head->data == key){
        head = head->next;
    }
    temp = head;
    while(temp!=NULL){
        if(temp->data == key){
           prev->next = temp->next;
        }else{
            prev = temp;
        }
        temp = temp -> next;
    }
    temp = head;
    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp -> next;
    }
    printf("NULL");
    return 0;
}
