#include <stdio.h>
void reverse(int *arr, int n)
{
    int *first = arr;
    int *last = arr + n - 1;
    while (first < last)
    {
        int temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}