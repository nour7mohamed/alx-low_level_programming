{{nclud main.h{
//_print_rev_recursion
//@s:char*S
//return : void
void _print_rev_recursion(char *s)
{
	if(*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
