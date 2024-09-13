#include <stdio.h>

int main(void)

{
    
    for (int i = 1; i <= 3; i++) {
        for(int j = 0; j <= 4; j++) {
            if(j==3) {
                continue;
            }
            printf("%d" , j);
        }
        printf("\n");
    }
    
    return 0;
    
}
