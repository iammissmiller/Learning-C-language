#include <stdio.h>
int add(int a, int b) { return a + b; }

int main()
{
	int (*add_ptr)(int, int) = &add;
	int result = add_ptr(3, 4);
	printf("Result: %d\n", result);

	return 0;
}
