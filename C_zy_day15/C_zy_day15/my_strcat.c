#define _CRT_SECURE_NO_WARNINGS 1
#include"my_strcat.h"

//Ä£ÄâÊµÏÖstrcat
char *my_strcat( char *dst, const char *src)
{
	assert(dst);
	assert(src);

	char *ret = dst;
	while (*dst)
	{
		++dst;
	}
	while (*dst++ = *src++);

	return ret;
}