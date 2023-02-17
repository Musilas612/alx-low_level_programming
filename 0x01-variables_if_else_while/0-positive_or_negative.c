#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
int n;
srand(time(0));
n =rand() - RAND_MAX / 2;
/* your code goes ther */
if (n> 0)
{
printf("%d is positive\n",n);
}
if (n < 0)
{
printf("%d is negative\n",n);
}
if (n == 0)
{
printf("%d is zero\n",n);
}
return (0);
}
