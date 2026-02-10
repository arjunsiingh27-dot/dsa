#include<stdio.h>
#include<string.h>
int main(){
    char str[100],revstr[100];
    printf("enter the string: ");
    scanf("%s",str);
    int n = strlen(str);
    for(int i=0;i<n;i++){
        revstr[i] = str[n-i-1];
    }
    revstr[n] = '\0';

    if(strcmp(str, revstr) == 0){
        printf("yes,String is a palindrome");
    }else{
        printf("no,Stirng is not a palindrome");
    }
    return 0;
}
