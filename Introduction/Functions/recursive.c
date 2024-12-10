#include <stdio.h>

// Function to calculate the factorial of a number
long factorial(int n) {
    if (n <= 1) 
    {
        n = 1; // Base case: factorial of 0 or 1 is 1
    }
    else
    {
        n *= factorial(n - 1); // Recursive call
    }
    return n;
}

int main() {
    int num = 5;
    long result;

    // Calculate the factorial of the given number
    result = factorial(num);
    printf("The factorial of %d is: %ld\n", num, result);

    return 0;
}
