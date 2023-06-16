#include <stdio.h>

int main()
{
    int n, num, min, max, digit;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);
        if (num < 0)
        {
            printf("Not Valid\n");
            continue;
        }
        min = 9;
        max = 0;
        while (num > 0)
        {
            digit = num % 10;
            if (digit < min)
                min = digit;
            if (digit > max)
                max = digit;
            num /= 10;
        }
        printf("%d and %d\n", min, max);
    }
    return 0;
}