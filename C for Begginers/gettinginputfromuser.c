// Getting input from user using scanf function
#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: "); 
    scanf("%d", &age); // &age is the address of age variable where the input will be stored
    printf("Age = %d", age);
    return 0;
}

// Getting input of double and character from user using scanf function

#include <stdio.h>
int main() {
    double number;
    char alphabet;
    
    printf(" Enter a double number :");
    scanf("%lf", &number);
    
    printf("Enter character input :");
    scanf("\n%c", &alphabet); // \n is used to consume the newline character left in the input buffer after reading the double number
    
    printf("Number = %lf", number);
    printf("\nCharacter = %c", alphabet);
    return 0;
}

// Getting input of double and character from user using scanf function in a single line
#include <stdio.h>
int main() {
    double number;
    char alphabet;
    
    printf(" Enter the inputs :");
    scanf("%lf %c", &number, &alphabet); // Read both the double number and character in a single line
    
    
    printf("Number = %lf", number);
    printf("\nCharacter = %c", alphabet);
    return 0;
}

// getting input of float and interger
#include <stdio.h>
int main() {
    int salary;
    float number;
    
    printf("Enter your salary :");
    scanf("%d", &salary);
    
    printf("Enter number in float :");
    scanf("\n%f", &number);
    
    printf("Salary = %d", salary);
    printf("\nNumber = %f", number);
    return 0;
}