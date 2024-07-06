// enum in c

#include <stdio.h>

// enum declaration 
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

// driver code
int main()
{
 //object of enum (week) , called day
   enum week day;
   day = Wed;
   printf("%d", day);
   return 0;
}