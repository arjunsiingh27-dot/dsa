#include<stdio.h>
int main(){
    int arr[5] = {2,3,1,4,9}; 
    int min = arr[0],max = arr[0];
    for(int i=0;i<5;i++){
    if(arr[i]>max){
        max = arr[i];
    }
    if(arr[i]<min){
        min = arr[i];
    }
}   
    printf("max element is: %d\n",max);
    printf("min element is: %d\n",min);

return 0;
}
