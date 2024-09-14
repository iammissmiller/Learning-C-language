#include <stdio.h>

int main(void)

{
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j<= i; ++j) {
            if (i <= 4) {
                printf("%d" , j);
            }
            else {
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
