#include <stdio.h>

int main(void)
{
    
    auto int view();
    view();
    printf("MAIN\n");
    
    int view()
    {
        printf("View\n");
        return 1;
    }
    printf("GEEKS");
    
    return 0;
    
}
