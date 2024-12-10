#include <stdio.h>

int main() {
    int x = 5, y = 10;

    // Check if both conditions are true
    if (x < y && y < 20) {
        printf("Both conditions are true.\n");
    }

    // Check if at least one condition is true
    if (x > y || y < 15) {
        printf("At least one condition is true.\n");
    }

    return 0;
}
