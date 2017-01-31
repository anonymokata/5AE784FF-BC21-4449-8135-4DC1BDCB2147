#include "calculare.h"
#include <stdio.h>


int int2roman (int input, char *output)
{
	output[0] = '\0';

	while (input >= 1000)
	{
		strncat (output, "M", MAX_STRING);
		input -= 1000;
	}

	while (input >= 900)
	{
		strncat (output, "CM", MAX_STRING);
		input -= 900;
	}

	while (input >= 500)
	{
		strncat (output, "D", MAX_STRING);
		input -= 500;
	}

	while (input >= 400)
	{
		strncat (output, "CD", MAX_STRING);
		input -= 400;
	}

	while (input >= 100)
	{
		strncat (output, "C", MAX_STRING);
		input -= 100;
	}

	while (input >= 90)
	{
		strncat (output, "XC", MAX_STRING);
		input -= 90;
	}

	while (input >= 50)
	{
		strncat (output, "L", MAX_STRING);
		input -= 50;
	}

	while (input >= 40)
	{
		strncat (output, "XL", MAX_STRING);
		input -= 40;
	}

	while (input >= 10)
	{
		strncat (output, "X", MAX_STRING);
		input -= 10;
	}

	while (input >= 9)
	{
		strncat (output, "IX", MAX_STRING);
		input -= 9;
	}

	while (input >= 5) 
	{
		strncat (output, "V", MAX_STRING);
		input -= 5;
	}

	while (input >= 4) 
	{
		strncat (output, "IV", MAX_STRING);
		input -= 4;
	}

	while (input >= 1)
	{
		strncat (output, "I", MAX_STRING);
		input -= 1;
	}

	return 0;

}


