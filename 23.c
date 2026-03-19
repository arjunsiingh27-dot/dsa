#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node* next;
};

int main(){
    struct node* newnode=NULL,*head_1 = NULL,*head_2=NULL,*temp_1 = NULL,*temp_2=NULL,*head_3=NULL,*temp_3=NULL;
    int n,m,value;
    printf("enter the size of n and m: ");
    scanf("%d %d",&n, &m);
    for(int i=0;i<n;i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the value of data : ");
        scanf("%d",&value);
        newnode -> data = value;
        newnode -> next = NULL;
        if(head_1 == NULL){
            head_1 = newnode;
            temp_1 = newnode;
        }else{
             temp_1 -> next= newnode;
             temp_1 = newnode;
        }
    }
    for(int i=0;i<m;i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the value of data : ");
        scanf("%d",&value);
        newnode -> data = value;
        newnode -> next = NULL;
        if(head_2 == NULL){
            head_2 = newnode;
            temp_2 = newnode;
        }else{
             temp_2 -> next= newnode;
             temp_2 = newnode;
        }
    }
    while(temp_1!=NULL&&temp_2!=NULL){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(temp_1->data < temp_2->data){
            newnode->data = temp_1->data;
            temp_1 = temp_1->next;
        }else{
            newnode->data = temp_2->data;
            temp_2 = temp_2->next;
        }
        newnode->next = NULL;
        if(head_3==NULL){
            head_3 = temp_3 = newnode;
        }else{
            temp_3->next = newnode;
            temp_3 = newnode;
        }
    }
        while(temp_1!=NULL){
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = temp_1->data;
        newnode->next = NULL;

        temp_3->next = newnode;
        temp_3 = newnode;
        temp_1 = temp_1->next;
    }

    while(temp_2!=NULL){
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = temp_2->data;
        newnode->next = NULL;

        temp_3->next = newnode;
        temp_3 = newnode;
        temp_2 = temp_2->next;
    }

    
    temp_3 = head_3;
    while(temp_3!=NULL){
        printf("%d->",temp_3->data);
        temp_3 = temp_3 -> next;
    }
    printf("NULL");
    return 0;
}
