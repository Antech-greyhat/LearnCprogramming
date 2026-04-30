// for loop in c
/*for loop syntax:
for(initialization; condition; increment/decrement) {
    // code to be executed
}
*/

// using for loop to print numbers from 1 to 10
#include <stdio.h>

int main() {
   for(int i = 1; i<10; i++){
       printf("%d ", i);
   }
    return 0;
}
// sum of even numbres from 1 to 100 using for loop in C

#include <stdio.h>

int main() {
    int sum = 0;
   for(int i = 2; i<=100; i = i+2){
       sum = sum + i;
   }
   printf("%d", sum);
    return 0;
}