 #include <stdio.h>

int main()
{

    int N = 5;
    
    int arr[] = { 1, 2, 3, 4, 5 };

    int* ptr;

    ptr = arr;

    for (int i = 0; i < N; i++) {
        
        printf("%d ", ptr[0]);
        ptr++;
    }
}
