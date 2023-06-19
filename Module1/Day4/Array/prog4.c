#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 3, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int odd_sum = 0;
    int even_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even_sum += arr[i];
        else
            odd_sum += arr[i];
    }
    printf("odd sum is :%d\n",odd_sum);
    printf("even sum is :%d\n",even_sum);
    printf("Absolute difference between odd and even elements of the array is %d\n", abs(odd_sum - even_sum));
    return 0;
}