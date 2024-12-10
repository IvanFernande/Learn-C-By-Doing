#include <stdio.h>

// Function to add two integers
int sumar(int a, int b);

int main() {
    int resultado;
    int num1 = 5;
    int num2 = 7;

    // Call the function to calculate the sum
    resultado = sumar(num1, num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, resultado);

    return 0;
}

// Function definition: returns the sum of two integers
int sumar(int a, int b) {
    return a + b;
}
