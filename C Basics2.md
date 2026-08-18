#main Function in C

The main function is an integral part of the programming languages such as C, C++, and Java.

main function in C is the entry point of a program where the execution of a program starts. 

It is a user-defined function that is mandatory for the execution of a program because when a C program is executed, the operating system starts executing the statements in the main() function.


Syntax of C main() Function

return_type main() {
    // Statement 1;
    // Statement 2;
    // and so on..
    return;
}


We can write the main function in many ways in C language as follows:

int main(){} or int main(void){}

main(){} or void main(){} or main(void){} or void main(void){}

Important Points about C main Function

It is the function where the program’s execution starts.

Every program has exactly one main function.

The name of this function should be “main” not anything else.

The main function always returns an integer value or void.

The main function is called by OS, not the user.


Types of C main Functions

Main function with no arguments and void return type

Main function with no arguments and int return type

Main function with the Command Line Arguments


1. Main Function with No Arguments and Void Return Type


// C Program to show main with no return type and no
// arguments
#include <stdio.h>

// Defining a main function
void main()
{

	// code
	printf("Hello Geek!");
}


2. Main Function with No Arguments and int Return Type


// C Program to show the main function with int return type
// and no arguments
#include <stdio.h>

int main()
{
	printf("Hello Geek!");
	return 0;
}



A return value of 0 indicates that the program was completed successfully, while any other value indicates that an error occurred.


3. Main Function with the Command Line Arguments

In this example, we have passed some arguments in the main() function as seen in the below code. These arguments are called command line arguments and these are given at the time of executing a program.

The first argument argc means argument count which means it stores the number of arguments passed in the command line and by default, its value is 1 when no argument is passed.

The second argument is a char pointer array argv[] which stores all the command line arguments passed. We can also see in the output when we run the program without passing any command line argument the value of argc is 1.


Syntax

int main(int argc, char* argv[])
{
   // Function body
}


Example


// C Program to illustrate the main function with command line arguments
#include <stdio.h>

int main(int argc, char* argv)
{

	// printing the coundt of arguments
	printf("The value of argc is %d\n", argc);
	// prining each argument
	for (int i = 0; i < argc; i++) {
		printf("%s \n", argv[i]);
	}

	return 0;
}


Output
The value of argc is 1
./369df037-e886-4cfb-9fd4-ad6a358ad7c6 



#Compiling a C Program: Behind the Scenes


The compilation is the process of converting the source code of the C language into machine code. 


As C is a mid-level language, it needs a compiler to convert it into an executable code so that the program can be run on our machine.


The C program goes through the following phases during compilation:


source file 

preprocessor

compiler

assembler

linker


#How do we compile and run a C program?


Step 1: Creating a C Source File

Step 2: Compiling using GCC compiler


The option -Wall enables all compiler’s warning messages. This option is recommended to generate better code. 

The option -o is used to specify the output file name. If we do not use this option, then an output file with the name a.out is generated.

Step 3: Executing the program

After compilation executable is generated and we run the generated executable using the below command.

 $ ./filename


What goes inside the compilation process?


A compiler converts a C program into an executable. There are four phases for a C program to become an executable: 

Pre-processing

Compilation

Assembly

Linking


By executing the below command, we get all intermediate files in the current directory along with the executable.

 $gcc -Wall -save-temps filename.c –o filename 


1. Pre-processing
This is the first phase through which source code is passed. This phase includes:

Removal of Comments

Expansion of Macros

Expansion of the included files.

Conditional compilation

The preprocessed output is stored in the filename.i


2. Compiling

The next step is to compile filename.i and produce an; intermediate compiled output file filename.s. This file is in assembly-level instructions. 


3. Assembling

In this phase the filename.s is taken as input and turned into filename.o by the assembler. 

This file contains machine-level instructions

At this phase, only existing code is converted into machine language, and the function calls like printf() are not resolved.

4. Linking

This is the final phase in which all the linking of function calls with their definitions is done. 

 Linker knows where all these functions are implemented. Linker does some extra work also, it adds some extra code to our program which is required when the program starts and ends.



#Benefits of C language over other programming languages


As a middle-level language, C combines the features of both high-level and low-level languages. It can be used for low-level programming, such as scripting for drivers and kernels and it also supports functions of high-level programming languages, such as scripting for software applications etc.

C is a structured programming language which allows a complex program to be broken into simpler programs called functions. It also allows free movement of data across these functions.

Various features of C including direct access to machine level hardware APIs, the presence of C compilers, deterministic resource use and dynamic memory allocation make C language an optimum choice for scripting applications and drivers of embedded systems.

C language is case-sensitive which means lowercase and uppercase letters are treated differently.

C is a general-purpose programming language and can efficiently work on enterprise applications, games, graphics, and applications requiring calculations, etc.

C language has a rich library which provides a number of built-in functions.

It also offers dynamic memory allocation.

C implements algorithms and data structures swiftly, facilitating faster computations in programs. This has enabled the use of C in applications requiring higher degrees of calculations like MATLAB and Mathematica.


#Tokens in C

A token in C can be defined as the smallest individual element of the C programming language that is meaningful to the compiler.


Types of Tokens in C


Keywords

Identifiers

Constants

Strings

Special Symbols

Operators


1. C Token – Keywords

Pre-defined or reserved words in a programming language

Since keywords are referred names for a compiler, they can’t be used as variable names because by doing so, we are trying to assign a new meaning to the keyword which is not allowed.

C language supports 32 keywords


2. C Token – Identifiers

Identifiers are used as the general terminology for the naming of variables, functions, and arrays.


Certain rules should be followed while naming c identifiers which are as follows:

They must begin with a letter or underscore(_).

They must consist of only letters, digits, or underscore. 

No other special character is allowed.

It should not be a keyword.

It must not contain white space.

It should be up to 31 characters long as only the first 
31 characters are significant.


3. C Token – Constants

The constants refer to the variables with fixed values. They are like normal variables but with the difference that their values can not be modified in the program once they are defined. 

Constants may belong to any of the data types.


4. C Token – Strings

Strings are nothing but an array of characters ended with a null character (‘\0’). This null character indicates the end of the string. 

Strings are always enclosed in double quotes. Whereas, a character is enclosed in single quotes in C and C++.


5. C Token – Special Symbols

Brackets[]: Opening and closing brackets are used as array element references. These indicate single and multidimensional subscripts.

Parentheses(): These special symbols are used to indicate function calls and function parameters.

Braces{}: These opening and ending curly braces mark the start and end of a block of code containing more than one executable statement.

Comma (, ): It is used to separate more than one statement like for separating parameters in function calls.

Colon(:): It is an operator that essentially invokes something called an initialization list.

Semicolon(;): It is known as a statement terminator.  It indicates the end of one logical entity. That’s why each individual statement must be ended with a semicolon.

Asterisk (*): It is used to create a pointer variable and for the multiplication of variables.

Assignment operator(=): It is used to assign values and for logical operation validation.

Pre-processor (#): The preprocessor is a macro processor that is used automatically by the compiler to transform your program before actual compilation.

Period (.): Used to access members of a structure or union.

Tilde(~): Used as a destructor to free some space from memory

6. C Token – Operators

Operators are symbols that trigger an action when applied to C variables and other objects. The data items on which operators act are called operands. 

Unary Operators: Those operators that require only a single operand to act upon are known as unary operators.For Example increment and decrement operators

Binary Operators: Those operators that require two operands to act upon are called binary operators. 

Binary operators can further are classified into: 

Arithmetic operators

Relational Operators

Logical Operators

Assignment Operators

Bitwise Operator

Ternary Operator: The operator that requires three operands to act upon is called the ternary operator. Conditional Operator(?) is also called the ternary operator.

The escape sequence in C is the characters or the sequence of characters that can be used inside the string literal.

The purpose of the escape sequence is to represent the characters that cannot be used normally using the keyboard. Some escape sequence characters are the part of ASCII charset but some are not.

Different escape sequences represent different characters but the output is dependent on the compiler you are using.

\a	Alarm or Beep	        It is used to generate a bell sound in the C program.
\b	Backspace	        It is used to move the cursor backward.
\f	Form Feed	        It is used to move the cursor to the start of the next logical page.
\n	New Line	        It moves the cursor to the start of the next line.
\r	Carriage Return	        It moves the cursor to the start of the current line.
\t	Horizontal Tab	        It inserts some whitespace to the left of the cursor and moves the cursor accordingly.
\v	Vertical Tab	        It is used to insert vertical space.
\\	Backlash	        Use to insert backslash character.
\’	Single Quote	        It is used to display a single quotation mark.
\”	Double Quote	        It is used to display double quotation marks.
\?	Question Mark	        It is used to double quotation marks.
\ooo	Octal Number	        It is used to represent an octal number.
\xhh	Hexadecimal Number	It represents the hexadecimal number.
\0	NULL	                It represents the NLL character.
























































