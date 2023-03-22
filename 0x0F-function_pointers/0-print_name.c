/**
 * print_name - direct to func
 * @name: the name to print
 * @f: the function to use
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
