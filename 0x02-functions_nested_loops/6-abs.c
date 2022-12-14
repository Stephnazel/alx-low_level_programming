#include "main.h"

/**
 * _abs - completes the absolute value of an integer
 *
 * @i: inputes number as integer
 *
 * Return: the absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
