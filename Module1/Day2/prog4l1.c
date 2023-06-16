#include <stdio.h> 
  
  
 int countSetBits(int num) { 
     int count = 0; 
     while (num) { 
         count += num & 1; 
         num >>= 1; 
     } 
     return count; 
 } 
  
 int main() { 
     int s; 
     printf("Enter the size of the array: "); 
     scanf("%d", &s); 
  
     int a[s]; 
     printf("Enter the elements of the array in hexadecimal format:\n"); 
     for (int i = 0; i < s; i++) { 
         scanf("%x", &a[i]); 
     } 
  
     int totalSetBits = 0; 
     for (int i = 0; i < s; i++) { 
         totalSetBits += countSetBits(a[i]); 
     } 
  
     printf("Total number of set bits in the given array: %d\n", totalSetBits); 
  
     return 0; 
 }