#include <stdio.h>

/**
* main - prints all the numbers of base 16 in lowercase
* Return: 0 after successful execution
*/

int main(void)
{
char hex;
for (hex = 0; hex <= 9; hex++)
{
putchar(hex);
}
for (hex = 'a'; hex <= 'f'; hex++)
{
putchar(hex);
}
putchar('\n');
return (0);
}
