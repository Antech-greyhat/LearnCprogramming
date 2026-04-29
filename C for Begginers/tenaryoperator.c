// ternary operator is a shorthand way of writing if-else statements in C. It is also known as the conditional operator.
/*
syntax of ternary operator
condition ? value_if_true : value_if_false;
*/

#include <stdio.h>
int main () {
    
    int age = 18;
    (age >= 18) ?
     printf(" You can Vote") : 
     printf("You cannot vote");
    
    return 0;
}

