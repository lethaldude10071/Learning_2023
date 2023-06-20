#include <stdio.h>

typedef struct {
    float real;
    float imag;
} complex;

complex readComplex() {
    complex c;
    printf("Enter the real and imaginary parts of the complex number: ");
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

void writeComplex(complex c) {
    printf("%.1f + %.1fi\n", c.real, c.imag);
}

complex addComplex(complex c1, complex c2) {
    complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

complex multiplyComplex(complex c1, complex c2) {
    complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

int main() {
    complex c1, c2, sum, product;

    printf("First complex number:\n");
    c1 = readComplex();
    printf("Second complex number:\n");
    c2 = readComplex();

    sum = addComplex(c1, c2);
    product = multiplyComplex(c1, c2);

    printf("Sum: ");
    writeComplex(sum);
    printf("Product: ");
    writeComplex(product);

    return 0;
}