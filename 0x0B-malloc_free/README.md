0x0B. C - malloc, free
TASK0: Write a function that creates an array of chars, and initializes it with a specific char.
A. Prototype: char *create_array(unsigned int size, char c);
B. Returns NULL if size = 0
C. Returns a pointer to the array, or NULL if it fails

TASK 1: Write a function that returns a pointer to a newly allocated space in          memory, which contains a copy of the string given as a parameter.
A. Prototype: char *_strdup(char *str);
B. The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can   be freed with free.
C. Returns NULL if str = NULL
D. On success, the _strdup function returns a pointer to the duplicated string.       It returns NULL if insufficient memory was available
FYI: The standard library provides a similar function: strdup. Run man strdup   to learn more.
TASK 2: Write a function that concatenates two strings.

A. Prototype: char *str_concat(char *s1, char *s2);
B. The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
D. if NULL is passed, treat it as an empty string
E. The function should return NULL on failure

TASK 3: Write a function that returns a pointer to a 2 dimensional array of            integers.
A. Prototype: int **alloc_grid(int width, int height);
B. Each element of the grid should be initialized to 0
C. The function should return NULL on failure
D. If width or height is 0 or negative, return NULL

TASK 4: Write a function that frees a 2 dimensional grid previously created                 by your alloc_grid function.
A. Prototype: void free_grid(int **grid, int height);
B. Note that we will compile with your alloc_grid.c file. Make sure it compiles.
TASK5: Write a function that concatenates all the arguments of your program.
A. Prototype: char *argstostr(int ac, char **av);
B. Returns NULL if ac == 0 or av == NULL
C. Returns a pointer to a new string, or NULL if it fails
D. Each argument should be followed by a \n in the new string

TASK 6: Write a function that splits a string into words.

A. Prototype: char **strtow(char *str);
B. The function returns a pointer to an array of strings (words)
C. Each element of this array should contain a single word, null-terminated
D. The last element of the returned array should be NULL
E. Words are separated by spaces
F. Returns NULL if str == NULL or str == ""
G. If your function fails, it should return NULL
