#include <stdio.h>

int main() {
    int n,m,sum=0;
    printf("Enter the row of matrix: ");
    scanf("%d", &n);
    printf("Enter the col of matrix: ");
    scanf("%d", &m);

    int matrix[n][m];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(i==j){
         sum = sum + matrix[i][j];
        }
    }
    }

    printf("%d\n",sum);
    return 0;
}
