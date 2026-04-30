// Switch Case in C

/*
syntax of switch case in C:
switch(expression) {
    case constant1:
        // code to be executed if expression equals constant1
        break;
    case constant2:
        // code to be executed if expression equals constant2
        break;
    ...
    default:
        // code to be executed if expression doesn't match any case
}
*/

// Example of switch case in C
#include <stdio.h>
int main () {
    int number;
    printf("Enter a number between 1 and 7 :");
    scanf("%d", &number);
    switch(number) {
        case 1:
        printf("Sunday");
        break;
        
        case 2:
        printf("Monday");
        break;
        
        case 3:
        printf("Tuesday");
        break;
        
        case 4:
        printf("Wednesday");
        break;
        
        case 5:
        printf("Thursday");
        break;
        
        case 6:
        printf("Friday");
        break;
        
        case 7:
        printf("Sartuday");
        break;
        
        default:
        printf("Invalid Number");
    }
    
    return 0;
}  // Output:
// Enter a number between 1 and 7 :3   
// Tuesday

//multiple cases in switch case in C

#include <stdio.h>
int main () {
    int number;
    printf("Enter a number between 1 and 7 :");
    scanf("%d", &number);
    
    switch(number) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        printf("Weekday");
        break;
        case 1:
        case 7:
        printf("Weekend");
        break;
        default :
        printf("Invalid Number");
    }
    
    return 0;
} // Output:
// Enter a number between 1 and 7 :5
// Weekday

//calculator using switch case in C

#include <stdio.h>

int main() {

  char operator;
  printf("Choose an operator ['+', '-', '*', '/']: ");
  scanf("%c", &operator);
  
  double num1, num2;
  
  printf("Enter first number: ");
  scanf("%lf", &num1);
  
  printf("Enter second number: ");
  scanf("%lf", &num2);
  
  double result;

  switch(operator) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    case '*':
      result = num1 * num2;
      break;

    default:
      printf("Invalid Operator");
  }
  
  printf("%.2lf", result); //this will print the result with 2 decimal places

return 0;
} 
 //months using switch case in C
 #include <stdio.h>

int main() {
    
    int month;
    printf("Enter a month between 1 and 12 :");
    scanf("%d",&month);
    
    switch(month) {
        case 1:
        printf("January");
        break;
        
        case 2:
        printf("February");
        break;
        
        case 3:
        printf("March");
        break;
        
        case 4:
        printf("April");
        break;
        
        case 5:
        printf("May");
        break;
        
        case 6:
        printf("June");
        break;
        
        case 7:
        printf("July");
        break;
        
        case 8:
        printf("August");
        break;
        
        case 9:
        printf("September");
        break;
        
        case 10:
        printf("Octomber");
        break;
        
        case 11:
        printf("November");
        break;
        
        case 12:
        printf("December");
        break;
        
        default:
        printf("Invalid Month");
    }
return 0;
}