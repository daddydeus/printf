#include "main.h"

/**
 * printf_Hex_aux - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
int printf_Hex_aux(unsigned int NUM)
{
	long int I;
	long int *ARRAY;
	long int COUNTER = 0;
	unsigned long int TEMP = NUM;

	while (NUM / 16 != 0)
	{
		NUM /= 16;
		COUNTER++;
	}
	COUNTER++;
	ARRAY = malloc(COUNTER * sizeof(long int));

	for (I = 0; I < COUNTER; I++)
	{
		ARRAY[I] = TEMP % 16;
		TEMP /= 16;
	}
	for (I = COUNTER - 1; I >= 0; I--)
	{
		if (ARRAY[I] > 9)
			ARRAY[I] = ARRAY[I] + 39;
		_putchar(ARRAY[I] + '0');
	}
	free(ARRAY);
	return (COUNTER);
}
