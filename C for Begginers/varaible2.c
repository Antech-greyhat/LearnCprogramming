// this programs shows the importance of using (\n) to declare new lines.
#include <stdio.h>
int main() {
    int number1 = 33;
    printf("%d", number1);
    printf("%d", number1);
    return 0;
}  
// the output will be 3333. instead of 1. 33 and 2nd 33. this is because we have not used the \n to declare in a new line. if we use \n the output will be 33 and 33 in a new line.