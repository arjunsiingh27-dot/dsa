#include<stdio.h>
int main(){
    int r, c;
    printf("enter the number of row and coloumn in the matrix:\n ");
    scanf("%d %d", &r, &c);
    int m[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    int srow =0,scol=0,erow = r-1,ecol = c-1;
    while(srow<=erow&&scol<=ecol){
        for(int j = scol;j<=ecol;j++){
            printf("%d\t",m[srow][j]);
        }
        for(int j = srow+1;j<=erow;j++){
             printf("%d\t",m[j][ecol]);
        }
        for(int j = ecol-1;j>=scol;j--){
            if(srow==erow){
                break;
            }
             printf("%d\t",m[erow][j]);
        }
        for(int j = erow-1;j>=srow+1;j--){
            if(scol==ecol){
                break;
            }
            printf("%d\t",m[j][scol]);
        }
        srow++;erow--;scol++;ecol--;
    }
    return 0;
}
