// Program to print UTC (Coordinated Universal //Time) of the system.



#include <stdio.h>
#include <time.h>
int main(void)
{
	struct tm* ptr;
	time_t t;
	t = time(NULL);
	ptr = gmtime(&t);
	printf("%s", asctime(ptr));
	return 0;
}












