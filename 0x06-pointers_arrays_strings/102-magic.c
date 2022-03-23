#include <stdio.h>

/**
 * main prints a[2] = 98
 * do not use variable a
 * do not allowed to modify variable p and do not use ,
 * code should be written at line 19
 * Return: void
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
