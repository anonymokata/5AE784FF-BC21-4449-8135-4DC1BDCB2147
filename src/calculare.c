#include "calculare.h"
#include <stdio.h>

#define INT2ROMANDIGIT(value,digit,input,output,max) while (input >= value) { strncat (output, digit,max); input -= value; }

int int2roman (int input, char *output)
{
	output[0] = '\0';

	INT2ROMANDIGIT (1000, "M",  input, output, MAX_STRING);
	INT2ROMANDIGIT (900,  "CM", input, output, MAX_STRING);
	INT2ROMANDIGIT (500,  "D",  input, output, MAX_STRING);
	INT2ROMANDIGIT (400,  "CD", input, output, MAX_STRING);
	INT2ROMANDIGIT (100,  "C",  input, output, MAX_STRING);
	INT2ROMANDIGIT (90,   "XC", input, output, MAX_STRING);
	INT2ROMANDIGIT (50,   "L",  input, output, MAX_STRING);
	INT2ROMANDIGIT (40,   "XL", input, output, MAX_STRING);
	INT2ROMANDIGIT (10,   "X",  input, output, MAX_STRING);
	INT2ROMANDIGIT (9,    "IX", input, output, MAX_STRING);
	INT2ROMANDIGIT (5,    "V",  input, output, MAX_STRING);
	INT2ROMANDIGIT (4,    "IV", input, output, MAX_STRING);
	INT2ROMANDIGIT (1,    "I",  input, output, MAX_STRING);

	return 0;
}
