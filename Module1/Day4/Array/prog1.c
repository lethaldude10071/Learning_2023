#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    float avg;
    
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    avg = (float)sum / n;
    
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
    
    return 0;
}