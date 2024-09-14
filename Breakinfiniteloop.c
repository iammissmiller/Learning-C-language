#include <stdio.h>

int main(void) {
    int i = 0;
    while (1) { // Remove the semicolon here to include the block within the loop
        printf("%d\n", i); // Added newline for better output readability
        i++;
        if (i == 5) {
            break;
        }
    }
    return 0;
}
