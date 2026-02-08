#include<stdio.h>
int fibo(int n){
   if(n==0){
    return 0;
   }
   if(n==1){
    return 1;
   }
   return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}
