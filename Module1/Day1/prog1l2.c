#include <stdio.h>
#define and &&
int isgreat(int *a,int *b, int *c)
{
    if(*a>*b and *a>*c)
    {
        printf("%d is greater",*a);

    }
    else if (*a<*b and *b>*c)
    {
        printf("%d is greater",*b);
    }
    else 
    {
        printf("%d is greater",*c);
    }
}
int main()
{
    int a,b,c;
    printf("enter the numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    isgreat(&a,&b,&c);
    return 0;

}
