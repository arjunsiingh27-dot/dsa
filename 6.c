#include <stdio.h>
int main() {
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int k = 0;

    for(int i = 0; i < n; i++){
        int isDuplicate = 0;

        for(int j = 0; j < k; j++){
            if(arr[i] == arr[j]){
                isDuplicate = 1;
                break;
            }
        }

        if(!isDuplicate){
            arr[k++] = arr[i];
        }
    }

    printf("final resultant array is: ");
    for(int i = 0; i < k; i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}
