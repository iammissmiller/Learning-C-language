#include <stdio.h>

struct str {
    
};

void func(int a , int b){};

int main()
{
    int a = 10;
    char c = 'G';
    struct str x;
    
    int* ptr_int = &a ;
    char* ptr_char = &c;
    struct str* ptr_str = &x;
    void(*ptr_func)(int , int) = &func;
    void* ptr_vn = NULL;
    
    printf("size of integer pointer \t:\t%d bytes\n" , sizeof(ptr_int));
    
    printf("size of character pointer \t:\t%d bytes\n" , sizeof(ptr_char));
    
    printf("size of  structure pointer \t:\t%d bytes\n" , sizeof(ptr_str));
    
    printf("size of function pointer \t:\t%d bytes\n" , sizeof(ptr_func));
    
    printf("size of NULL pointer \t:\t%d bytes\n" , sizeof(ptr_vn));
    
    return 0;
}
