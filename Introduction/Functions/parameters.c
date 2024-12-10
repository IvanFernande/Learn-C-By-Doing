#include <stdio.h>

// Function to increment a number by value (does not affect the original variable)
void increaseByValue(int num) {
    num += 1;
}

// Function to increment a number by reference (affects the original variable)
void increaseByReference(int *num) {
    (*num) += 1;
}

int main() {
    int a = 5;

    // Call the function to increment by value
    increaseByValue(a);
    printf("After increaseByValue, a = %d\n", a);

    // Call the function to increment by reference
    increaseByReference(&a);
    printf("After increaseByReference, a = %d\n", a);
    
    return 0;
}
