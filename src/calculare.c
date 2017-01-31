#include "calculare.h"
#include <stdio.h>

#define INT2ROMANDIGIT(value,digit,input,output,max) while (input >= value) { strncat (output, digit,max); input -= value; }

/* 
  int2roman converts the value passed as 'input' to Roman Numeral
  and places the result int the character buffer given by 'output'
*/
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

/*
	roman2int converts the roman numeral passed in via the character 
	buffer 'input' to decimal integer, and returns it, or -1 in the 
	case of an error
*/
int roman2int (char *input)
{
	int i          = 0;
  int output     = 0;
	int value      = 0;
	int last_value = 10000;

  while ((i<MAX_STRING)&&(input[i] != '\0'))
	{
		switch (input[i])
		{
			case 'M': value = 1000; break;
			case 'D': value = 500;  break;
			case 'C': value = 100;  break;
			case 'L': value = 50;   break;
			case 'X': value = 10;   break;
			case 'V': value = 5;    break;
			case 'I': value = 1;    break;
		  default: return -1;     break;
		}
		output += value;
		if (value > last_value)
		{
		  output -= 2 * last_value;
		}
		i++;
		last_value = value;
  }
  return output;
}
