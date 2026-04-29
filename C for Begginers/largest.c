#include <stdio.h>

int main() {

    int a, b, l;

    printf("input two numbers");

    scanf("%d %d", &a, &b);

    l = (a>b) ? a:b;

    printf("largest number is : %d" , l);
    return 0;

}