 - More pointers, arrays and strings



Task-0:- Write a function that concatenates two strings.

              a, Prototype: char *_strcat(char *dest, char *src)

              b, This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and                         then adds a terminating null byte

              c, Returns a pointer to the resulting string dest

              FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.

Task-1:- Write a function that concatenates two strings. 

               a,   Prototype: char *_strncat(char *dest, char *src, int n)

              b, The _strncat function is similar to the _strcat function, except that

                         1. it will use at most n bytes from src; and

                         2. src does not need to be null-terminated if it contains n or more bytes

             c, Return a pointer to the resulting string dest

               FYI: The standard library provides a similar function: strncat. Run man strncat to learn more. 

Task-2:- Write a function that copies a string.

              a, Prototype: char *_strncpy(char *dest, char *src, int n) 

              b, Your function should work exactly like strncpy

             FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more

Task-3:- Write a function that compares two strings. 

              a, Prototype:int _strcmp(char *s1, char *s2) 

              b, Your function should work exactly like strcmp

              FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more

Task-4:- Write a function that reverses the content of an array of integers. 

              a, Prototype: void reverse_array(int *a, int n) 

              b, Where n is the number of elements of the array

Task-5:-Write a function that changes all lowercase letters of a string to uppercase. 

              a, Prototype: char *string_toupper(char *) 

Task-6:- Write a function that capitalizes all words of a string. 

              a, Prototype: char *cap_string(char *) 

              b, Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

                

Task-7:- Write a function that encodes a string into 1337.

               1,  Letters a and A should be replaced by 4

              2,  Letters e and E should be replaced by 3

              3,  Letters o and O should be replaced by 0

              4,  Letters t and T should be replaced by 7

             5,  Letters l and L should be replaced by 1

             6,  Prototype: char *leet(char *);

            7,  You can only use one if in your code

            8,  You can only use two loops in your code

            9,  You are not allowed to use switch

            10, You are not allowed to use any ternary operation

   optional questions

Task-8:- Write a function that encodes a string using rot13. { Prototype: char *rot13(char *) }

Task-9:- Write a function that prints an integer. { Prototype: void print_number(int n) }

Task-10:- A dream doesn't become reality through magic; it takes sweat, determination and hard work

Task-11:- Write a function that adds two numbers. { Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r) }

Task-12:- Write a function that prints a buffer. { Prototype: void print_buffer(char *b, int size) }
