// arrays in c
// an array is a collection of variables of the same type
// an array is a data structure that can hold a fixed number of values of the same type

/*
syntax:
data_type array_name[array_size];
*/
// example:
int numbers[5]; // an array of 5 integers
// we can also initialize an array at the time of declaration
int numbers[5] = {1, 2, 3, 4, 5}; // an array of 5 integers initialized with values
// we can also initialize an array without specifying the size
int numbers[] = {1, 2, 3, 4, 5}; // the size is automatically determined by the compiler

// we can access the elements of an array using the index
// the index starts from 0
int first_number = numbers[0]; // access the first element of the array
int second_number = numbers[1]; // access the second element of the array
// we can also modify the elements of an array
numbers[0] = 10; // modify the first element of the array
numbers[1] = 20; // modify the second element of the array
// we can also use a loop to access and modify the elements of an array
for (int i = 0; i < 5; i++) {
    printf("Element %d: %d\n", i, numbers[i]);
}



#include <stdio.h>

int main() {
    
     int month[4];
    printf("\nEnter 4 month  input values :");
    
    scanf("\n%d", &month[0]);
    scanf("\n%d", &month[1]);
    scanf("\n%d", &month[2]);
    scanf("\n%d", &month[3]);
    
    printf("\n-----Month value entered are : -----");
    printf("\n%d", month[0]);
    printf("\n%d", month[1]);
    printf("\n%d", month[2]);
    printf("\n%d", month[3]);
    
    printf("\n----Random age values ----");
    
    int age[5] = {10, 14, 57, 55, 60};
    
    age[2] = 100;
    printf("\n%d", age[0]);
    printf("\n%d", age[1]);
    printf("\n%d", age[2]);
    printf("\n%d", age[3]);
    printf("\n%d", age[4]);
    
    printf("\n---Random Numbers : ---");
    
    int numbers[3];
    
    numbers[0] = 11;
    numbers[1] = 31;
    numbers[2] = 71;
    
    printf("\n%d  ", numbers[0]);
    printf("\n%d", numbers[1]);
    printf("\n%d", numbers[2]);
    

    return 0;
}

//multidimensional arrays in c
// a multidimensional array is an array of arrays
/*
syntax:
data_type array_name[size1][size2]...[sizeN];
*/  
// example:
int matrix[3][3]; // a 2D array of 3 rows and 3 columns
// we can also initialize a multidimensional array at the time of declaration
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
}; // a 2D array of 3 rows and 3 columns initialized with values
// we can access the elements of a multidimensional array using the index
int first_element = matrix[0][0]; // access the first element of the array
int second_element = matrix[0][1]; // access the second element of the array
// we can also modify the elements of a multidimensional array
matrix[0][0] = 10; // modify the first element of the array
matrix[0][1] = 20; // modify the second element of the array
// we can also use nested loops to access and modify the elements of a multidimensional array
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("Element [%d][%d]: %d\n", i, j, matrix[i][j]);
    }
}

//example of multidimensional array:
#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}