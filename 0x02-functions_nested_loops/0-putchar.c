#include <main.h>

/**
 * main - prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
**/

int main(void)
{
int i;
char j[] = "_putchar";

for (i = 0; i <= 7; i++)
{
_putchar(j[i]);
}

_putchar('\n');

return (0);
}
