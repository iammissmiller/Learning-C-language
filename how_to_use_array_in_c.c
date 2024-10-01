#include <stdio.h>

int main()
{
    //declare and initialise 
    int arr[6] = { 10 , 20 ,40 ,30 ,90 , 59};
    
    //modifyor update at index 4
    arr[4] = 908;
    
    //transversing array using loop 
    printf("elements in array :");
    for (int i = 0; i < 5; i++) {
        printf("%d " , arr[i]);
    }

    return 0;
}
