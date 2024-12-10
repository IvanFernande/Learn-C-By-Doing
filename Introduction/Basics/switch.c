#include <stdio.h>

char option = 'B';

int main() {

    switch (option) {
        case 'A':
            printf("Option A selected.\n");
            break;
        case 'B':
            printf("Option B selected.\n");
            break;
        case 'C':
            printf("Option C selected.\n");
            break;
        default:
            printf("Invalid option.\n");
    }

    return 0;
}
