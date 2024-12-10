#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person person1 = {"Juan Pérez", 30, 1.75f};

    // Print the details of the person
    printf("Name: %s\n", persona1.name);
    printf("Age: %d\n", persona1.age);
    printf("Height: %.2f m\n", persona1.height);

    // Update the age
    person1.age = 22;

    // Print the updated details of the person
    printf("Name: %s\n", persona1.name);
    printf("New age: %d\n", persona1.age);
    printf("Height: %.2f m\n", persona1.height);

    return 0;
}
