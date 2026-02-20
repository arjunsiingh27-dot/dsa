#include<stdio.h>
int main(){
    int arr[6] = {1,-1,2,-2,3,-3},sum,count=0;
    for(int i=0;i<6;i++){
        sum = 0;
        for(int j = i;j<6;j++){
           for(int k = i;k<=j;k++){
               sum += arr[k];
               if(sum ==0){
                count++;
               }
           }
        }
    }
    printf("count is: %d",count);
    return 0;
}
