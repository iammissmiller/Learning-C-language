#include <stdio.h>

int main() {
    int n = 13;
    int arr[n];  // Declare an array of size n
    int* p = arr;  // Pointer to the array
    int odd = 0;   // Initialize odd counter
    int even = 0;  // Initialize even counter

    // Fill the array with some values
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);  // Input values for the array
    }

    // Count odd and even numbers
    for (int i = 0; i < n; i++) {
        if (p[i] % 2 == 0) {  // Access array elements correctly
            even++;
        } else {
            odd++;
        }
    }

    printf("No. of odd elements = %d\n", odd);
    printf("No. of even elements = %d\n", even);

    return 0;
}
