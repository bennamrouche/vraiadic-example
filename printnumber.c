
#include "variadic.h"
#include "test.h"

void printnumber(int count,...)
{
	va_list li;
	va_start(li,count);
	for (int i = 0;i < count ;i++)
	{
		printf("\t\t\x1B[32m%d\n", va_arg(li, int));
	}
	printf("\n");
	va_end(li);
}


