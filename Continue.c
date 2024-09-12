#include <stdio.h>

int main()

{ for(int i = 1; i<= 8; i++ )
    {
        if (i==4) {
            continue ;
        }
        printf("%d " , i);
    }
    int i = 0;
    while (i<8) {
        i++;
        if (i == 4) {
            continue;
        }
        printf("%d " , i);
    }
    return 0;
    
}
