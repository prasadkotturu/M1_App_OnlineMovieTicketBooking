#ifndef FUN1_H
#define FUN1_H

/* Included to allow users to call functions from math library if required */
#include "string.h"

/* strcture definition must be reused by the users in their code */
struct book
{
	char code[20];
	char name[20];
	char date[20];
	int cost;
	

};

#endif