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