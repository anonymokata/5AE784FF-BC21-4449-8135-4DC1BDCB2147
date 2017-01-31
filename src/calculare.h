#ifndef _CALCULARE_H_
#define _CALCULARE_H_

#include <string.h>

#define MAX_STRING 256

int int2roman (int input, char *output);
int roman2int (char *input);
int add_roman (char *in1, char *in2, char *output);
int sub_roman (char *in1, char *in2, char *output);


#endif
