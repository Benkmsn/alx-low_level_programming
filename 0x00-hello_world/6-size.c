#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
char x;
int y;
long int u;
long long int v;
float z;
printf("Size of a char: %lu.\n", (unsigned long)sizeof(x));
printf("size of an int: %lu.\n", (unsigned long)sizeof(y));
printf("size of a long int: %lu.\n", (unsigned long)sizeof(u));
printf("size of a long long int: %lu.\n", (unsigned long)sizeof(v));
printf("size of a float: %lu.\n", (unsigned long)sizeof(z));
return (0);
}
