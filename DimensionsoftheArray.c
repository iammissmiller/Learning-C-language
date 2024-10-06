#include <stdio.h>

int main()
    {
        
        int arr2d[2][2] = {1 , 2 ,3 ,3};
        
        int arr3d[2][2][2] = {1, 3, 4, 56 ,43, 2,4 ,5 };
        
        printf("2D Array : ");
        
        for (int i = 0 ; i < 2; i++){
            for (int j = 0 ; j < 2 ; j++){
                printf("%d " , arr2d[i][j]);
            }
        }
        printf("\n3D Array : ");
        
        for (int i = 0 ; i < 2 ; i++){
            for (int j = 0 ; j < 2 ; j++){
                for (int k = 0 ; k < 2 ; k++){
                    printf("%d " , arr3d[i][j][k]);
                }
            }
        }
        
        return 0;
    }
