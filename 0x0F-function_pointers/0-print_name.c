/**
 * print_name - print name
 * @name: ptr to name
 * @f: function ptr
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
