// if statements are used to make decisions in code. They allow you to execute different blocks of code based on certain conditions.

/*
if (condition) {
    // code to be executed if condition is true
}
*/

#include <stdio.h>
int main () {
    int age;
    printf("Enter your age :");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("You are eligible to vote");
        
    }
    if (age < 18) {
        printf("You are not eleigible to vote");
    }
    return 0;
}

// if else statements are used to make decisions in code. They allow you to execute different blocks of code based on certain conditions.

/*
syntax of if else statement
if (condition) {
    // code to be executed if condition is true
} else {
    // code to be executed if condition is false
}
*/

#include <stdio.h>
int main () {
    int age;
    printf("Enter your age :");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("You are eligible to vote");
        
    } else {
        printf("You are not eligible to vote");
    }
    return 0;
}

// else if statements are used to make decisions in code. They allow you to execute different blocks of code based on certain conditions.

/*
syntax of else if statement
if (condition) {
    // code to be executed if condition is true
} else if (condition) {
    // code to be executed if condition is true
} else {
    // code to be executed if condition is false
}
*/

#include <stdio.h>
int main () {
    int age;
    
    printf("Enter your age");
    scanf("%d", &age);
    
    if (age > 120 || age < 0) {
        printf("Inavlid age");
        
    } else if (age >= 18) {
        printf("You are eligible to vote");
    } else {
        printf("You are not eligible to vote");
    }
    return 0;
}

#include <stdio.h>
int main () {
   double number;
   
   printf("Enter a number :");
   scanf("%lf", &number);
   
   if (number >= 1) {
       printf("The number is positive");
 
   } else if (number >=0) {
       printf("The number is zero(0)");
   } else {
       printf("The number is negative");
   }
    return 0;
}