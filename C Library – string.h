C Library – <string.h>

Last Updated : 15 Mar, 2023
string.h is a standard header file in the C language that contains functions for manipulating strings (arrays of characters). <string.h> header file contains some useful string functions that can be directly used in a program by invoking the #include preprocessor directive.

Syntax:
#include <string.h>





C string.h Library Functions

<string.h> header file contains the following functions: 



strlen()

Returns the length of the string.


strcpy()

Copy one string to another.


strncpy()

Copy first n characters of one string to another.


strcat()

Concatenates two strings.


strncat()

Concatenates first n characters of one string to another.


strcmp()

Compares two strings.


strncmp()

Compares first n characters of two strings.


strchr()

Find the first occurrence of the given character in the string.


strrchr()

Finds the last occurrence of the given characters in the string.


strstr()

Find the given substring in the string.


strcspn()

Returns the span of the source string not containing any character of the given string.


strspn()

Returns the span of the source string containing only the characters of the given string.


strpbrk()

Finds the first occurrence of any of the characters of the given string in the source string.


strtok()

Split the given string into tokens based on some character as a delimiter.


strcoll()

Compares two strings that are passed.


memset()

Initialize a block of memory with the given character.


memcmp()

Compares two blocks of memory.


memcpy()

Copy two blocks of memory.


memmove()

Moves two blocks of memory.


memchr()

Finds the given character in the block of memory.


#include <stdio.h>

#include <string.h>

int main()
{

char deststring[10] = "geeksfor";
char sourcestring[10] = "geeks";
char tempdeststring[10];

printf("length of destination string : %ld\n" , strlen(deststring));

strcpy(tempdeststring , sourcestring);
printf("tempdeststring after strcpy() : %s\n" , tempdeststring);

strcat(deststring , sourcestring);
printf("deststring after concatenation : %s\n" , deststring);

    printf("Comparing deststring with sourcestring: %d\n", strncmp(deststring, sourcestring, strlen(sourcestring)));

printf("searching sourcestring in deststring : %s\n" , strstr(deststring , sourcestring));

return 0;

}






