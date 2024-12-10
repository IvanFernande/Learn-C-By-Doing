#include <stdio.h>
#include <string.h>

int main() {
    int integer = 25;
    char character = 'A';
    float float_ = 3.14f;
    double double_ = 2.71828182;
    char string[12] = "Hello World!";

    printf("Integer: %d\n", integer);
    printf("Character: %c\n", character);
    printf("Float: %.2f\n", float_);
    printf("Double: %.9lf\n", double_);
    printf("String: %s\n", string);

    return 0;
}
