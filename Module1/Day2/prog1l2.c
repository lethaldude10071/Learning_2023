#include <stdio.h>

void swap_alternate(int arr[], int n) {
    for (int i = 0; i < n-1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = sizeof(a)/sizeof(a[0]);
    swap_alternate(a, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int b[] = {10, 20, 30, 40, 50, 60};
    n = sizeof(b)/sizeof(b[0]);
    swap_alternate(b, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}