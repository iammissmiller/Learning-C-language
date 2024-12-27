// C program that demonstrates
// the use of remove() function
#include <stdio.h>

int main()
{
	if (remove("abc.txt") == 0)
		printf("Deleted successfully");
	else
		printf("Unable to delete the file");

	return 0;
}
