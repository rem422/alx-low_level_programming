#include <stdio.h>

/**
* main - prints the alphabet in lowercase
* Return: 0 after successful execution
*/

int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar("\n");
return (0);
}
