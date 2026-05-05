// strings functions in c programming language
// in c programming language, strings are represented as arrays of characters.
// a string is terminated by a null character '\0' to indicate the end of the string.
/*
    syntax:
    char string_name[size];
*/

// there are many string functions in c programming language that can be used to manipulate strings. some of the most commonly used string functions are:
// 1. strlen() - to find the length of a string
// 2. strcpy() - to copy a string
// 3. strcat() - to concatenate two strings
// 4. strcmp() - to compare two strings


#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "antech";
    
    printf("\n length is : %zu", strlen(name)); // %zu is used to print the size_t type returned by strlen() function
    
    char bestFood[] = "meat";
    char food[strlen(bestFood)]; // we can also use char food[20]; to declare a string with a fixed size, but it is better to use strlen() function to determine the size of the string to avoid buffer overflow.
    
    strcpy(food, bestFood);
    printf("\nBest food is : %s", bestFood);
    
    char text1[] = "Hello, ";
    char text2[] = " Antech";
    
    strcat(text1, text2); // strcat() function is used to concatenate two strings. it takes two strings as arguments and appends the second string to the first string. the first string must have enough space to hold the concatenated result.
    printf("\n%s", text1);
    
    char comp1[] = "abcd";
    char comp2[] = "efgh";
    
    int result = strcmp(comp1, comp2); // strcmp() function is used to compare two strings. it takes two strings as arguments and returns an integer value. if the first string is less than the second string, it returns a negative value. if the first string is greater than the second string, it returns a positive value. if both strings are equal, it returns 0.
    
    printf("\n%d", result);
    return 0;
}