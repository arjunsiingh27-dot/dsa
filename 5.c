#include<stdio.h>
int main(){
    int n,m;
    printf("enter the value of n and m: ");
    scanf("%d %d",&n,&m);
    int a[n],b[m],c[m+n];
    printf("enter the elements of array a: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the elements of array b: ");
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k++] = a[i++];
        }else{
            c[k++] = b[j++];
        }
    }
    while(i<n){
        c[k++] = a[i++];
    }
    while(j<m){
        c[k++] = b[j++];
    }

    for(int k =0;k<n+m;k++){
        printf("%d\t",c[k]);
    }

    return 0;
}
