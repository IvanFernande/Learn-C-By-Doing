#include <stdio.h>

int main() {
    int a = 10, b = 3;
    float result;

    // Perform division and cast one operand to float for accurate division
    result = (float)a / b;

    // Print results of various arithmetic operations
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %.2f\n", result);
    printf("Modulo: %d\n", a % b);

    return 0;
}
