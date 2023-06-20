#include <stdio.h>

struct box {
    int length;
    int width;
    int height;
};

void calculateBox(struct box *ptrBox, int *volume, int *surfaceArea) {
    *volume = ptrBox->length * ptrBox->width * ptrBox->height;
    *surfaceArea = 2 * (ptrBox->length * ptrBox->width + ptrBox->length * ptrBox->height + ptrBox->width * ptrBox->height);
}

int main() {
    struct box myBox = {2, 3, 4};
    struct box *ptrBox = &myBox;

    int volume, surfaceArea;
    calculateBox(ptrBox, &volume, &surfaceArea);

    printf("Volume: %d\n", volume);
    printf("Surface Area: %d\n", surfaceArea);

    return 0;
}