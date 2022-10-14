0x10. C - Variadic functions

Task 0: Write a function that returns the sum of all its parameters.
	Prototype: int sum_them_all(const unsigned int n, ...);
	If n == 0, return 0

Task 1: Write a function that prints numbers, followed by a new line.

A, Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
B, where separator is the string to be printed between numbers
C, and n is the number of integers passed to the function
D, You are allowed to use printf
E, If separator is NULL, don’t print it
F, Print a new line at the end of your function

Task 2: Write a function that prints strings, followed by a new line.

A, Prototype: void print_strings(const char *separator, const unsigned int n, ...);
B, where separator is the string to be printed between the strings
C and n is the number of strings passed to the function
D, You are allowed to use printf
E, If separator is NULL, don’t print it
F, If one of the string is NULL, print (nil) instead
G, Print a new line at the end of your function

Task 3:Write a function that prints anything.

A, Prototype: void print_all(const char * const format, ...);
B, where format is a list of types of arguments passed to the function
	c: char
	i: integer
	f: float
	s: char * (if the string is NULL, print (nil) instead
	any other char should be ignored

see example
C, You are not allowed to use for, goto, ternary operator, else, do ... while
D, You can use a maximum of
	2 while loops
	2 if
E, You can declare a maximum of 9 variables
F, You are allowed to use printf
G, Print a new line at the end of your function
