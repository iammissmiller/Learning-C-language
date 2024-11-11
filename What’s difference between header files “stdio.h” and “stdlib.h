What’s difference between header files “stdio.h” and “stdlib.h” ?


These are two important header files used in C programming. While “<stdio.h>” is header file for Standard Input Output, “<stdlib.h>” is header file for Standard Library. One easy way to differentiate these two header files is that “<stdio.h>” contains declaration of printf() and scanf() while “<stdlib.h>” contains declaration of malloc() and free(). In that sense, the main difference in these two header files can considered that, while “<stdio.h>” contains header information for ‘File related Input/Output’ functions, “<stdlib.h>” contains header information for ‘Memory Allocation/Freeing’ functions.

Wait a minute, you said “<stdio.h>” is for file-related IO but printf() and scanf() don’t deal with files… or are they? As  a basic principle, in C (due to its association with UNIX history), keyboard and display are also treated as ‘files’! In fact keyboard input is the default stdin file stream while display output is the default stdout file stream. Also, please note that, though “<stdlib.h>” contains declaration of other types of functions as well that aren’t related to memory such as atoi(), exit(), rand() etc. yet for our purpose and simplicity, we can remember malloc() and free() for “<stdlib.h>”.

It should be noted that a header file can contain not only function declaration but definition of constants and variables as well. Even macros and definition of new data types can also be added in a header file.

Differences between stdio.h and stdlib.h :

stdio.h

stdio.h stands for Standard Input Output

It has information related to input/output functions.

Some of the functions in stdio.h are printf, scanf ,getc, putc , etc

stdio.h is used by almost every C program.

stdlib.h

stdlib.h stands for Standard Library.

It has information related to memory allocation/free functions.

Some of the functions in stdlib.h are malloc ,  free ,abort , exit ,etc.

stdlib.h is only use when we need to allocate memory in our program.


