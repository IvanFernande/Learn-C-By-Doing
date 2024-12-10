#include <stdio.h>
#include <string.h>

union Data {
    int integer;
    float decimal;
    char character;
    char string[10];
};

int main() {
    union Data data;

    // Assign an integer value
    data.integer = 100;
    printf("Data as integer: %d\n", data.integer);

    // Assign a float value
    data.decimal = 98.6f;
    printf("Data as float: %.1f\n", data.decimal);

    // Assign a character value
    data.character = 'A';
    printf("Data as character: %c\n", data.character);

    // Assign a string value
    strcpy(data.string, "Hello world");
    printf("Data as string: %s\n", data.string);

    // Print all data members to demonstrate overwriting in a union
    printf("All data together: \n");
    printf("Data as integer: %d\n", data.integer);
    printf("Data as float: %.1f\n", data.decimal);
    printf("Data as character: %c\n", data.character);
    printf("Data as string: %s\n", data.string);

    return 0;
}
