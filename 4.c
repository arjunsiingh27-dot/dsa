#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int start =0,end = n-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++,end--;
    }
    for(int i=0;i<n;i++){
        printf(" %d\t",arr[i]);
    }
    return 0;
}
