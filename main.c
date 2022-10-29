
#include "variadic.h"
#include "test.h"
int main ()
{
printf("\x1B[31m->test : printnumber\n");
	printnumber_test();
printf("\x1B[31m->test : printstring\n");
	printstring_test();
printf("\x1B[31m->test : createfiles\n");
	createfiles_test();
printf("\x1B[31m->test : romovefiles_test\n");
	removefiles_test();
}

void printnumber_test()
{
	printf("\t\x1B[34mtest 1  count = 0:\n");
	printnumber(0);
	printf("\t\x1B[34mtest 2 count = 1:\n");
	printnumber(1, 789);
	printf("\t\x1B[34mtest 3 count = 2:\n");
	printnumber(2, 79999, 745);
	printf("\t\x1B[34mtest 4 count  = 5:\n");
	printnumber(5, 58, 41, 25, 36, 14);
}
void printstring_test()
{
	printf("\t\x1B[34mtest 1  count = 0:\n");
	printstring(0);
	printf("\t\x1B[34mtest 2 count = 1:\n");
	printstring(1, "word1");
	printf("\t\x1B[34mtest 3 count = 2:\n");
	printstring(2, "word1", "word2");
	printf("\t\x1B[34mtest 4 count  = 5:\n");
	printstring(5, "word1", "word2", "word3", "word4", "word");
}
void createfiles_test()
{
	printf("\t\x1B[34mtest 1  count = 0:\n");
	createfiles(0);
	printf("\t\x1B[34mtest 2 count = 1:\n");
	createfiles(1, "test2");
	printf("\t\x1B[34mtest 3 count = 2:\n");
	createfiles(2, "test3_1", "test3_2");
	printf("\t\x1B[34mtest 4 count  = 5:\n");
	createfiles(5, "test4_1", "test4_2", "test4_3", "test4_4", "test4_5");
}
void removefiles_test()
{
	printf("\t\x1B[34mtest 1  count = 0:\n");
	removefiles(0);
	printf("\t\x1B[34mtest 2 count = 1:\n");
	removefiles(1, "test2");
	printf("\t\x1B[34mtest 3 count = 2:\n");
	removefiles(2, "test3_1", "test3_2");
	printf("\t\x1B[34mtest 4 count  = 5:\n");
	removefiles(5, "test4_1", "test4_2", "test4_3", "test4_4", "test4_5");
}
/**
 *


*/
