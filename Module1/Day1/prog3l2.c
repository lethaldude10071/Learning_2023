#include<stdio.h>
#define or ||
int isvow(char);
int main()
{
    char ip;int c;
    printf("enter input:\n");
    scanf("%c",&ip);
    c=isvow(ip);
    printf("the output :%d",c);
}
int isvow(char a)
{
    if (a=='a'or a=='A'or a=='e'or a=='E'or a=='i'or a=='I'or a=='o'or a=='O' or a=='u'or a =='U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}