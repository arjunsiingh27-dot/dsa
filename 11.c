#include<stdio.h>
int main(){
    int i,j;
    printf("enter the number of row and coloumn in the matrix:\n ");
    scanf("%d %d",&i,&j);
    int matrix_A[i][j],matrix_B[i][j];
    printf("\nenter the elements of matrix 1: ");
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
        scanf("%d",&matrix_A[k][l]);
      }
    }
    printf("\nenter the elements of matrix 2: ");
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
        scanf("%d",&matrix_B[k][l]);
      }
    }
    int matrix_c[i][j];
    for(int k =0;k<i;k++){
        for(int l=0;l<j;l++){
            matrix_c[k][l] = matrix_A[k][l] + matrix_B[k][l];
            printf("%d\t",matrix_c[k][l]);
        }
        printf("\n");
    }
    return 0;
}
