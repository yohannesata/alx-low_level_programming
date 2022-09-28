#include "main"
/**
 *  _puts_recursion -prints a string.
 *  @s: string to be printed.
 */
void _puts_recursion(char *s)
{
	if(*s == Nullptr)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
