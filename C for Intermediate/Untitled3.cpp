#include<stdio.h>

#define pi 3.142

int main() 
{

    float A, r;

    printf("Enter the Radius");

    scanf("%f", &r);

    A = pi * r * r;


    printf("Area = %f",A);

    return 0;
}