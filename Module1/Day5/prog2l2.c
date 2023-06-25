#include <stdio.h>
#include <math.h>

struct point {
    float x;
    float y;
};

int main() {
    struct point p1, p2;
    printf("Enter the x-coordinate of point 1: ");
    scanf("%f", &p1.x);
    printf("Enter the y-coordinate of point 1: ");
    scanf("%f", &p1.y);
    printf("Enter the x-coordinate of point 2: ");
    scanf("%f", &p2.x);
    printf("Enter the y-coordinate of point 2: ");
    scanf("%f", &p2.y);

    float distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    printf("The distance between (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n",
           p1.x, p1.y, p2.x, p2.y, distance);

    return 0;
}