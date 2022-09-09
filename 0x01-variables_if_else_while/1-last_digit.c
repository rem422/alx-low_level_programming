#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - generates random number n
* Determines whether n is 0, n > 5 or n < 6
* Return: 0
*/

int main(void)
{
int n;
int lastDigitOf;

srand(time(0));
n = rand() - RAND_MAX / 2;

lastDigitOf = n % 10;

printf("Last digit of %d is %d and is", n, lastDigitOf);
if (lastDigitOf > 5)
printf("greater than 5\n");
else if (lastDigitOf == 0)
printf("is 0\n");
else
printf("less than 6 and not 0\n");
return (0);
}
