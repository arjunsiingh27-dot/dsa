#include<stdio.h>
void reverse(int *arr,int start ,int end){
    while(start<end){
        int tempt = arr[start];
        arr[start] = arr[end];
        arr[end] = tempt;
        start++;end--;
    }
}      

int main(){
    
    int arr[7] = {1,2,3,4,5,6,7};
    int k=3,n=7;
    k = k % n;
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}
