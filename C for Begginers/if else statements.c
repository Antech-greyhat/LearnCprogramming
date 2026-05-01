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

// more complex example 

#include <stdio.h>

int main() {
    int score;

    printf("Enter student score (0-100): ");
    scanf("%d", &score);

    // Using IF statements to categorize the scores
    if (score >= 0 && score <= 49) {
        printf("Remark: Style up\n");
    } 
    else if (score >= 50 && score <= 59) {
        printf("Remark: Very poor\n");
    } 
    else if (score >= 60 && score <= 69) {
        printf("Remark: Fair\n");
    } 
    else if (score >= 70 && score <= 79) {
        printf("Remark: Good\n");
    } 
    else if (score >= 80 && score <= 100) {
        printf("Remark: Excellent\n");
    } 
    else {
        // This handles numbers outside the 0-100 range
        printf("Invalid score! Please enter a value between 0 and 100.\n");
    }

    return 0;
}// This program takes a student's score as input and categorizes it into different remarks based on the score range using if-else statements. It also includes a check for invalid scores outside the 0-100 range.


// Another example using if-else statements
#include <stdio.h>

int main() {
    float gross_salary, tax_amount, net_pay;
    float tax_rate = 0;

    printf("--- KPA Payroll System ---\n");
    printf("Enter the Gross Salary (Ksh): ");
    scanf("%f", &gross_salary);

    // Determine the tax rate based on the brackets
    if (gross_salary > 40000) {
        tax_rate = 0.30; // 30%
    } 
    else if (gross_salary > 30000) { 
        // Logic: if it's not > 40000 but it is > 30000
        tax_rate = 0.25; // 25%
    } 
    else if (gross_salary > 20000) {
        tax_rate = 0.15; // 15%
    } 
    else {
        // Covers everything 20000 and below
        tax_rate = 0.00; // No tax
    }

    // Calculations
    tax_amount = gross_salary * tax_rate;
    net_pay = gross_salary - tax_amount;

    // Output results
    printf("\n--- Salary Breakdown ---");
    printf("\nGross Salary : Ksh %.2f", gross_salary);
    printf("\nTax Rate     : %.0f%%", tax_rate * 100);
    printf("\nTax Amount   : Ksh %.2f", tax_amount);
    printf("\n------------------------");
    printf("\nNet Pay      : Ksh %.2f\n", net_pay);

    return 0;
} // This program calculates the tax amount and net pay based on the gross salary input by the user. It uses if-else statements to determine the appropriate tax rate according to specified salary brackets.