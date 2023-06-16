#include <stdio.h>

void print_bits(int num)
{
    int i;
    printf("The bits of the integer are: ");
    for (i = 31; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main()
{
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);
    print_bits(num);
    return 0;
}