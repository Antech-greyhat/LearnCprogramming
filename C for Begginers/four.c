#include <stdio.h>

int main() {

    int a, b, c, d, l;

    printf("input four numbers");

    scanf("%d %d %d %d", &a, &b, &c, &d);

    l = (a>b) ? a:b;
    l = (l>c) ? l:c;
    l = (l>d) ? l:d;

    printf("largest number is : %d" , l);
    return 0;
}