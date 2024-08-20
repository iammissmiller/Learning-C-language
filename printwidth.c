#include <stdio.h>

int main(void)
{

int num = 45638;

printf("printing num with width 10");

printf("\n");

int chars_printed = printf("%10d" ,num);

printf("\nNumber of characters printed: %d" , chars_printed);

printf("\nPrinting num with width 3: ");

chars_printed = printf("%3d" , num );

printf("\nNumber of characters printed: %d",chars_printed);

return 0;

}



