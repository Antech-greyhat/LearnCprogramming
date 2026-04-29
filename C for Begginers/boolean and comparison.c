// Boolean and Comparison Operators in C

// In C, there is no built-in boolean type like in some other programming languages. However, we can use the stdbool.h header to work with boolean values. The stdbool.h header defines the bool type and the constants true and false.
#include <stdio.h>
#include <stdbool.h>
int main () {
    
    bool value1 = true;
    bool value2 = false;
    
    printf(" value1 = %d", value1);
    printf("\nvalue2 = %d", value2);
    
    return 0;
} 

// Comparison operators in C are used to compare two values. The result of a comparison is either true (1) or false (0). Here are some common comparison operators:
// == : Equal to
// != : Not equal to
// >  : Greater than
// <  : Less than
// >= : Greater than or equal to
// <= : Less than or equal to

//greater than
#include <stdio.h>
#include <stdbool.h>
int main () {
    
    bool value = (12 > 9);
    printf("%d", value);
    
    return 0;
} // Output: 1 (true)

#include <stdio.h>
#include <stdbool.h>
int main () {
    
    bool value = (1 > 9);
    printf("%d", value);
    
    return 0;
} // Output: 0 (false)

//less than

#include <stdio.h>
#include <stdbool.h>
int main () {
    
    bool value = (1 < 9);
    printf("%d", value);
    
    return 0;
} // Output: 1 (true)

//equal to
#include <stdio.h>
#include <stdbool.h>
int main () {
    
    bool value = (1 == 9);
    printf("%d", value);
    
    return 0;
} // Output: 0 (false)

#include <stdio.h>
#include <stdbool.h>
int main () {
    
    bool value = (9 == 9);
    printf("%d", value);
    
    return 0;
} // Output: 1 (true)

//not equal to

#include <stdio.h>
#include <stdbool.h>
int main () {
    
    bool value = (10 != 9);
    printf("%d", value);
    
    return 0;
} // Output: 1 (true)

// comparing variables

#include <stdio.h>
#include <stdbool.h>
int main () {
    
    int num1 = 100;
    int num2 = 20;
    bool value = num1 > num2;
    printf("%d", value);
    
    return 0;
} // Output: 1 (true)


// logical operators in C are used to combine multiple boolean expressions. The common logical operators are:
// && : Logical AND - returns true if both expressions are true
// || : Logical OR - returns true if at least one expression is true
// ! : Logical NOT - returns true if the expression is false and vice versa 

// logical AND example
#include <stdio.h>
#include <stdbool.h>
int main () {
    
    int age = 18;
    double height = 6.3;
    bool result = (age >= 18) && (height > 6.0);
    printf("%d", result);
    return 0;
} // Output: 1 (true)

// logical OR example
#include <stdio.h>
#include <stdbool.h>
int main () {
    
    int age = 18;
    double height = 6.3;
    bool result = (age >= 18) || (height > 6.0);
    printf("%d", result);
    return 0;
} // Output: 1 (true)

// logical NOT example
#include <stdio.h>
#include <stdbool.h>
int main () {
    
    int age = 18;
    double height = 6.3;
    bool result = !(age >= 18);
    printf("%d", result);
    return 0;
} // Output: 0 (false)