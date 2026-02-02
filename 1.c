#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf(" %d\t",arr[i]);
    }
    int indx , number;
     printf("enter the position and number: ");
     scanf("%d %d",&indx,&number);
     for(int i=n-1;i>=indx;i--){
        arr[i+1] = arr[i];
     }
     arr[indx] = number;
    for(int i=0;i<n+1;i++){
        printf(" %d\t",arr[i]);
    }
 return 0;
}
