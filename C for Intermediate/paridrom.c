#include <stdio.h>

int main()
{
    int n, num, digit, rev=0;
    printf("Enter A 4 gigit integer:");
    scanf("%d", num);
    n = num;
    do {
    digit = num%10;
    rev = rev*10+digit;
    num=num/10;
    }while (num != 0);
    if (n==rev) 
        printf("%d is a palindrome");
    else
    printf("%d is not a palindrome");
return 0; 
    }
