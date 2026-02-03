#include <stdio.h>
int main()
{
    int n, comparison = 0, index = 0;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    printf("enter the value of integer you want to find: ");
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != k)
        {
            comparison++;
        }
        else
        {
            index = i;
            comparison++;
            break;
        }
    }
    printf("found at index %d\n", index);
    printf("comparison = %d\n", comparison);
    return 0;
}
