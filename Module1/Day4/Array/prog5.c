#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {7, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int odd_sum = 0;
    int even_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            even_sum += arr[i];
        else
            odd_sum += arr[i];
    }
    printf("Absolute difference between odd and even indexed elements of the array is %d\n", abs(odd_sum - even_sum));
    return 0;
}