// this shows how to print different data types in C programming.

/*
int ------- % d
float ----- % f
char ------ % c
string ---- % s
double ---- % lf
*/

// printing intergers in C programming.

#include <stdio.h>
int main() {
    int number1 = 10;
    printf("Age =%d", number1);
    return 0;
}

// printing doubles and floats in C programming.

#include <stdio.h>
int main() {
    double number = 12.45;
    float number1 = 10.9f;  // we use f to declare a float variable. if we do not use f the compiler will treat it as a double variable and this will cause an error.
    printf("Number= %lf", number);
    printf("\nFloat = %f",number1); // we use \n to declare a new line. if we do not use \n the output will be Number= 12.45Float = 10.900000. if we use \n the output will be Number= 12.45 and Float = 10.900000 in a new line.
    return 0;
}  // to remove the extra zeros after the decimal point in the float variable we can use %.2f instead of %f. this will round the float variable to 2 decimal places. if we use %.2f the output will be Number= 12.45 and Float = 10.90 in a new line.

// printing characters in C programming.
#include <stdio.h>
int main() {
    char character = 'A';
    printf("character= %c", character);
    
    char character2 = 'hello'; // this will cause an error because we can only assign a single character to a char variable. if we want to assign a string to a variable we need to use a char array or a string variable.
    printf("\ncharacter2 = %c", character2);
    return 0;
}