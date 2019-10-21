#define _CRT_SECURE_NO_WARNINGS 1
#include"my_strcpy.h"
//Ä£ÄâÊµÏÖstrcpy
char * my_strcpy(char *dst, const char *src)
{
	assert(dst);
	assert(src);

	do
	{
		*dst = *src;
		++dst;
		++src;
	}while (*src);
	return dst;
}