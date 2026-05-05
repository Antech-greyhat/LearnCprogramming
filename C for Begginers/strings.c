// in c programming language, strings are represented as arrays of characters.
// a string is terminated by a null character '\0' to indicate the end of the string.

/*
    syntax:
    char string_name[size];
*/


#include <stdio.h>

int main() {
    char name[] = "Antech";
    
    printf("%s", name);
    return 0;
}


#include <stdio.h>

int main() {
    char name[15];
    
    printf("Enter your name :");
    scanf("%s", &name);
    printf("your name is : %s ", name );
    printf("%s", name);
    return 0;
}

//also we can use gets() function to read a string from the user, but it is not recommended to use gets() function because it can cause buffer overflow if the user enters a string that is longer than the size of the array.
#include <stdio.h>

int main() {
    char name[15];
    
    printf("Enter your name :");
    gets(name); // not recommended
    printf("your name is : %s ", name );
    return 0;
}

//accessing individual characters of a string
#include <stdio.h>

int main() {
    char name[] = "Antech";
    
    printf("First character: %c\n", name[0]);
    printf("Second character: %c\n", name[1]);
    printf("Third character: %c\n", name[2]);
    printf("Fourth character: %c\n", name[3]);
    printf("Fifth character: %c\n", name[4]);
    printf("Sixth character: %c\n", name[5]);
    
    return 0;
}

// changing values of characters in a string


#include <stdio.h>

int main() {
    char name[20];

   
    printf("Enter your name :");
    scanf("%s",&name);
    
    name[0] = 't';
    name[5] = 'u';
    
    printf("Your name is : %s", name);
    return 0;
}