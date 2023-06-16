#include <stdio.h> 
  
 void swap(void *ptr1, void *ptr2) { 
     char temp;   
  
  
     char *charPtr1 = (char *)ptr1; 
     char *charPtr2 = (char *)ptr2; 
  
  
     while (*charPtr1 && *charPtr2) { 
         temp = *charPtr1; 
         *charPtr1 = *charPtr2; 
         *charPtr2 = temp; 
         charPtr1++; 
         charPtr2++; 
     } 
 } 
  
 int main() { 
     int a = 6; 
     int b = 8; 
  
     printf("Before swap: a = %d, b = %d\n", a, b); 
  
     swap(&a, &b); 
  
     printf("After swap: a = %d, b = %d\n", a, b); 
  
     return 0; 
 }