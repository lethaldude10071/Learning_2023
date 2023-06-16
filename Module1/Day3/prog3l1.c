#include <stdio.h>

int main()
{
    int num, max = 0, temp, i;
    printf("Enter a 4-digit integer: ");
    scanf("%d", &num);
    for (i = 1; i <= 1000; i *= 10)
    {
        temp = (num / (i * 10)) * i + (num % i);
        if (temp > max)
            max = temp;
    }
    printf("The largest number that can be obtained by deleting a single digit is: %d\n", max);
    return 0;
}