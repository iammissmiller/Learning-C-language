#include <stdio.h>
int main(void)
{
    
    printf("Main");
    int fun()
    {
        printf("fun");
        
        int view()
        {
            printf("view");
        }
        return 1;
    }
    view();
    
}
