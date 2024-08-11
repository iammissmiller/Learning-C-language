#include <stdio.h>
#include <stdbool.h>

bool is_even(int num)

{
if (num % 2 == 0)
{
return true;
}

else
{
return false;
}
}
int main()
{
int num = 5;
if (is_even(num))
{
printf("%d is even\n", num);
}
else 
{
printf("%d is odd\n", num);
}

return 0;

}