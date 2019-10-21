#define _CRT_SECURE_NO_WARNINGS 1
#include"my_strstr.h"

//Ä£ÄâÊµÏÖstrstr
char *my_strstr(const char*str1, const char *str2)
{
	assert(str1);
	assert(str2);

	char *src = (char *)str1;
	char *sub = (char *)str2;
	char *p;

	while (*src)
	{
		p = src;
		while (*src&&*sub&&*src==*sub)
		{
			src++;
			sub++;
		}
		if (!(*sub))
		{
			return p;
		}
		else
		{
			src = ++p;
			sub = str2;
		}
	}
	return NULL;
}