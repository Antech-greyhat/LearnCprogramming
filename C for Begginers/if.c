#include <stdio.h>

int main() {

    int a,b;

    printf("input two numbers");

    scanf("%d %d", &a, &b);
    if (a>b) {
        printf("largest number is : %d" , a);
    }
    else {
        printf("largest number is : %d" , b);
    }
    return 0;
}