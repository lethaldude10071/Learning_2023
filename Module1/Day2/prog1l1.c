#include <stdio.h> 

typedef unsigned long long ULL; 

void printExponent(double x) { 

    ULL *ptr = (unsigned long long *)&x; 


    ULL exponent = (*ptr & 0x7FF0000000000000) >> 52; 


    printf("Exponent (Hex): 0x%llx\n", exponent); 


    printf("Exponent (Binary): "); 
    for (int i = 11; i >= 0; i--) { 
        printf("%d", (exponent >> i) & 1); 
    } 
    printf("\n"); 
} 

int main() { 
    double x; 


    printf("Enter a double value: "); 
    scanf("%lf", &x); 

    printExponent(x); 

    return 0; 
}