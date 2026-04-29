// type conversion in C language

// In C, when you perform operations on different data types, the compiler automatically converts them to a common type. This is known as type conversion or type coercion. In the example below, we have a character '7' which is implicitly converted to its ASCII value (55) when added to the integer 4.
#include <stdio.h>
int main () {
    char y = '7';
    int x = 4;
    int results = x + y;
    printf("%d", results);
    return 0;
}  // Output: 59

// In the next example, we have a double value 11.56 which is implicitly converted to an integer (11) when added to the integer 7. The result is then printed as an integer.
#include <stdio.h>
int main () {
    double y = 11.56;
    int x = 7;
    int results = y + x;
    printf("%d", results);
    return 0;
}  // Output: 18

// In this example, we have a double value 5.67 which is added to an integer 9. The result is stored in a double variable, and the output is printed as a double.
#include <stdio.h>
int main () {
    double y = 5.67;
    int x = 9;
    double results = y + x;
    printf("%lf", results);
    return 0;
} // Output: 14.670000

// In this example, we explicitly cast the double value 5.67 to an integer before adding it to the integer 9. This results in the double value being truncated to 5, and the final result is 14 when printed as a double.
#include <stdio.h>
int main () {
    double y = 5.67;
    int x = 9;
    double results = (int)y + x;
    printf("%lf", results);
    return 0;
}// Output: 14.000000

// In this example, we have two integers 9 and 2. When we divide them, the result is an integer (4) because both operands are integers. However, we store the result in a double variable, which causes the integer result to be implicitly converted to a double (4.0) when printed.
#include <stdio.h>
int main () {
    int a = 9;
    int b = 2;
    
    double result = a/b;
    
    printf("%lf", result);
    return 0;
}// Output: 4.000000