//vowel or consonant 

#include <stdio.h>

int main()
{

char x;

printf("enter any character : ");

scanf("%c" , &x);

if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' )

printf("entered character is a vowel ");

else

printf("given character is a consonant");

return 0;

}