#include <stdio.h>

void swap(int *x , int *y)

{
    int t ;
    
    t = *x;
    *x = *y;
    *y = t;
}

int main()

{
    int x , y , t;
    
    printf("enter no. you want to swap : ");
    
    scanf("%d %d" , &x , &y);
    
    printf("\nbefore calling swap x = %d , y = %d " , x , y );
    
    swap(&x , &y);
    
    printf("\nafter calling swap x = %d , y = %d " , x , y );
    
    return 0;
}
