#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;

void swap(point *pa, point *pb) {
    int temp;

    temp = pa->x;
    pa->x = pb->x;
    pb->x = temp;

    temp = pa->y;
    pa->y = pb->y;
    pb->y = temp;
}

int main() {
    point p1 = {1, 2};
    point p2 = {3, 4};

    printf("Before swapping:\n");
    printf("p1: (%d, %d)\n", p1.x, p1.y);
    printf("p2: (%d, %d)\n", p2.x, p2.y);

    swap(&p1, &p2);

    printf("\nAfter swapping:\n");
    printf("p1: (%d, %d)\n", p1.x, p1.y);
    printf("p2: (%d, %d)\n", p2.x, p2.y);

    return 0;
}