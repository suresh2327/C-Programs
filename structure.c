#include <stdio.h>

// Define a structure called Person
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare and initialize a structure variable
    struct Person person1 = {"John Doe", 30, 5.9};

    // Access and print structure members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f\n", person1.height);

    return 0;
}
