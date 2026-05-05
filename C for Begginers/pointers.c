// pointers in c programming language
// a pointer is a variable that stores the memory address of another variable.
// the address of a variable can be obtained using the & operator.
// the value stored at the memory address pointed to by a pointer can be accessed using the * operator.

#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x; // ptr stores the address of x

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void*)&x);
    printf("Value of ptr: %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    *ptr = 20; // changes the value of x through the pointer
    printf("New value of x: %d\n", x);

    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    int age = 24;
    
    printf("%p", &age); // prints the memory address of the variable age
    return 0;
}