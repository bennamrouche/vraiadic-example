#include "variadic.h"

void removefiles(int count, ...)
{
	va_list li;


	va_start(li, count);
	for (size_t i = 0; i < count; i++)
	{
		char *filename;
			filename=va_arg(li,char *);
		if (remove(filename) == 0)
		{
			printf("\t\t\x1B[32mThe file [ %s ]is deleted successfully.\n", filename);
		}
		else
		{
			printf("\t\t\x1B[32mThe file [ %s ] is not deleted.\n", filename);
		}
	}
	printf("\n");
	va_end(li);
}
