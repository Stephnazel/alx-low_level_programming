#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the file a program was compiled
 * from, followed by a new line
 * Return: 0, Success.
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
