#include <stdio.h>

int main() {
    int counter = 1;

    while (counter <= 5) {
        printf("While - Counter: %d\n", counter);
        counter++;
    }

    counter = 1;

    do {
        printf("Do-While - Counter: %d\n", counter);
        counter++;
    } while (counter <= 5);

    return 0;
}
