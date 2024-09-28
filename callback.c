#include <stdio.h>

void A() {
    printf("I am Function A\n");
}

void B(void (*ptr)())
{
    
    (*ptr) ();
    
}

int main()
{
    
    void (*ptr)() =&A;
    B(ptr);
    
    return 0;
    
}
