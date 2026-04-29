// operators in C language 

/*
        Arithmetic Operators:
+ ----- Addition operator
- ----- Subtraction operator
* ----- Multiplication operator
/ ----- Division operator
% ----- Modulus operator
++ ----- Increment operator(used to increase the value of a variable by 1 and can be used as a prefix or postfix operator)
-- ----- Decrement operator(used to decrease the value of a variable by 1 and can be used as a prefix or postfix operator)
*/

// addition operator

#include <stdio.h>
int main () {
    
    int z = 10;
    
    int results = z + 20;
    
    printf("%d", results);

    // adding floats
    double y = 12.97;
   double results = y + 10.11;
   printf("%.2lf", results); // to print the result with 2 decimal places

    return 0;
}

// subtraction operator

#include <stdio.h>
int main () {
    
   int k = 22;
   int r = k - 13;
   printf("%d", r);
   return 0;
}

//division operator
#include <stdio.h>
int main () {
    int x = 40;
    int z = x/10;
    printf("%d", z);
    return 0;
}

// division operator with floats
#include <stdio.h>
int main () {
    double x = 40.0;
    double z = x/10.0;
    printf("%.2lf", z); // to print the result with 2 decimal places
    return 0;
}

// modulus operator/ remainder operator
#include <stdio.h>
int main () {
    int x = 40;
    int z = x%9;
    printf("%d", z);
    return 0;
}

// subtraction operator
#include <stdio.h>
int main () {
    int x = 40;
    int z = x-9;
    printf("%d", z);
    return 0;
}

//subtraction operator with floats
#include <stdio.h>
int main () {
    double x = 40.0;
    double z = x-9.0;
    printf("%.2lf", z); // to print the result with 2 decimal places
    return 0;
}

//increment operator

#include <stdio.h>
int main () {
    int x = 40;
    printf("%d", ++x);
    return 0;
}

//decrement operator
#include <stdio.h>
int main () {
    int x = 40;
    printf("%d", --x);
    return 0;
}

// multiple operators

#include <stdio.h>
int main () {
    int x = (4/2)+(20*2)-10; // the operations inside the parentheses will be performed first, then the addition and subtraction will be performed from left to right
    printf("%d", x);
    return 0;
}