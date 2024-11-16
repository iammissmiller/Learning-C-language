#include <stdio.h>
#define  PI  3.1416
#define  AREA(r)  (PI*(r)*(r))

int main() {
      float r = 7;    // radius of circle
      
    printf("Area of Circle with radius %.0f: %.3f", r, AREA(r));
    return 0;
}

// This code is contributed by Susobhan Akhuli
