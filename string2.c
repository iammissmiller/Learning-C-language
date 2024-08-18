#include <stdio.h>



int main(void)


{
    

// Declare string variable
    
// as character array
    

char str[50];

    

printf("Enter the word: ");
    
scanf("%s", str);  

// No newline in format string
    

printf("\nEntered word is: %s\n", str);



// Clear the input buffer by consuming leftover newline
    
getchar();

    

printf("\nEnter the sentence: ");
    
scanf("%[^\n]", str);  

// Read until newline
    

printf("\nEntered sentence is: %s\n", str);

    

return 0;


}