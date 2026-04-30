//while loop in C
/*
while loop syntax:
while(condition) {
    // code to be executed
}
*/

#include <stdio.h>

int main() {
    int count = 1;
    while(count < 5) {
        printf("\nWhile  loop in c");
        printf("\nCount = %d",count);
        
        count = count + 1;
    }

    return 0;
}

//
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number");
    scanf("%d", &number);
    int count = 1;
    while(count <= 10){
        int product = count * number;
        printf("\nproduct = %d", product);
        count = count + 1;
    }
    return 0;
}