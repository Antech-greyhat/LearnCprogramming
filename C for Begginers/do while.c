// do while loop
/*do while loop syntax:
do {
    // code to be executed
} while(condition);
*/

// Example of do while loop in C

#include <stdio.h>

int main() {
    int count = 1;
    do {
        printf("\n%d", count);
        count = count + 1;
    }while(count < 5);
    return 0;
}