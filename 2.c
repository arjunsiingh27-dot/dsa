#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf(" %d\t",arr[i]);
    }
    int indx;
    printf("enter the value of indx: ");
    scanf("%d",&indx);
    for(int i=indx;i<n-1;i++){
       arr[i] = arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf(" %d\t",arr[i]);
    }
    return 0;
}
