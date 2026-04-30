// functions in c

#include <stdio.h>
void greet() {
    printf("Hello, World");
}
int main() {
    greet();

    return 0;
}

// square of a number

#include <stdio.h>
void calculateSquare(int number) {
    int square = number * number;
    printf("square of %d is %d\n", number, square);
}

int main() {
    calculateSquare(10);
    calculateSquare(1);
    calculateSquare(120);

    return 0;
}