#include<stdio.h>
int main(){
    int arr[7] = {2,1,1,4,5,5,2};
    int n = 7 ;
    int hash[26] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }
    for(int i=0;i<n;i++){
        printf("%d : %d\n",arr[i],hash[arr[i]]);
    }
    return 0;
}


