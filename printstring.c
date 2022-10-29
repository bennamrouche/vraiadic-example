
#include "variadic.h"


void printstring (int count,...)
{
	va_list li;
	va_start(li,count);
	for (size_t i = 0; i < count; i++)
	{
		printf("\t\t\x1B[32m%s\n", va_arg(li, char *));
	}
	printf("\n");
	va_end(li);
}
