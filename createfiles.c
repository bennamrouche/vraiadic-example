
#include "variadic.h"

void createfiles(int count, ...)
	{
		va_list li;
		FILE *fp;

		va_start(li, count);
		for (size_t i = 0; i < count; i++)
		{
			char *filename;

			filename = va_arg(li, char *);
				fp = fopen(filename, "w+");
				printf("\t\t\x1B[32mcreate : %s > \x1B[33mOk\n", filename);
				fclose(fp);
		}
printf("\n");
		va_end(li);
	}
