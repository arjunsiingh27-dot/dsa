#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void closestToZero(int arr[], int n) {
    int minSum = INT_MAX;
    int num1, num2;

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];

            if(abs(sum) < abs(minSum)) {
                minSum = sum;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

    printf("Pair closest to zero: %d and %d\n", num1, num2);
}
