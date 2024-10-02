#include <stdio.h>

int main()

{
    int arr[2][3] = {23 , 12 , 13 , 16 , 12};
    
    printf("2D array : \n");
    
    for(int i = 0 ; i < 2; i++) {
        for (int k = 0; k < 3 ; k++) {
            printf("%d " , arr[i][k]);
        }
        printf("\n");
    }
    return 0;
}
