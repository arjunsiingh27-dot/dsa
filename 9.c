#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter the string: ");
    scanf("%s", str);
    int n = strlen(str);
    int left =0,right = n -1;
    while(left<right){
        char tempt = str[left];
        str[left] = str[right];
        str[right] = tempt;
        left++;
       right--;
    }
    printf("%s\t",str);
    return 0;
}
