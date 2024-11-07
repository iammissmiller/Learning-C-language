// As we are importing the file and henceforth the
// defination
#include "somefile.h"

// Declaring the same variable
extern int var;
    // int var;
    // It will throw compiler error as compiler will get
    // confused where the variable is defined

int main(void)
{
    var = 10;
    return 0;
}

// Now it will compile and run successfully
