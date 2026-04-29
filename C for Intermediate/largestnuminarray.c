#include <stdio.h>

int main() {
int A[50], i, l, n;
printf("Enter size of the array:"),
scanf("%d", &n);

printf("Enter array elements\n:"),

for(i=0; i<n; i++)
        scanf("%d", &A[i]);
/* display the elements*/
printf("The array elements are\n");
    for(i=0; i<n; i++)
        printf("%d\n", A[i]);
    l = A[0];
    for(i=l; i<n; i++){
        if(A[i]>l)
            l = A[i];
    }
    printf("Largest = %d", l);
    return 0;
}