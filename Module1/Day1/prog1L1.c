#include <stdio.h> 
  
 int findMax(int num1, int num2) { 
     int max; 
  
     if (num1 > num2) { 
         max = num1; 
     } else { 
         max = num2; 
     } 
 // Using Ternary operator 
 //int max = (num1 > num2) ? num1 : num2; 
  
     return max; 
 } 
  
 int main() { 
     int num1, num2; 
     printf("Enter the first number: "); 
     scanf("%d", &num1); 
     printf("Enter the second number: "); 
     scanf("%d", &num2); 
  
     int max = findMax(num1, num2); 
  
     printf("The maximum number is: %d\n", max); 
  
     return 0; 
 }