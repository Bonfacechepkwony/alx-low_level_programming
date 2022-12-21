#include "main.h"
#include <stdio.h>
/*
 *void reset_to_98 - function that takes a pointer to an int as parameter
 * and updates the value it points to to_98
 * Return: Always sucessful
 */
int main(void)
{
	int n;

      	n = 402;
	printf("n = %d\n", n);
	reset_to_98(&n);
 	pintf("n = %d\n", n);
	return (0);
}
