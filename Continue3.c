#include <stdio.h>

int main(void)

{
    
    printf("break in for loop\n");
    for(int i = 1; i<5 ; i++) {
        if(i==3) {
            break;
        }
        else {
            printf("%d" , i);
        }
    }
    printf("\nbreak in while loop \n");
    int i = 1;
    while (i < 20) {
        if (i == 3)
        break;
        else
        printf("%d",i);
        i++;
    }
    return 0;
}
