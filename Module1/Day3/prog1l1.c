#include<stdio.h>
int pattern(int);
int main()
{
    int N;
    printf("enter row value:\n");
    scanf("%d",&N);
    pattern(N);
}
int pattern(int n)
{
    int i,j;
    for(i=n; i>=1; i--) 
     { 
         // Prints first part of pattern 
         for(j=1; j<=i; j++) 
         { 
             printf("%d",i); 
         } 
         // Prints spaces between two parts 
         for(j=i*2; j<n*2; j++) 
         { 
             printf(" "); 
         } 
  
         // Prints second part of the pattern 
         for(j=i; j>=1; j--) 
         { 
             printf("%d",j); 
         } 
         printf("\n"); 
     } 
     
}