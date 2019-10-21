#define _CRT_SECURE_NO_WARNINGS 1
#include"my_strchr.h"

//Ä£ÄâÊµÏÖstrchr
char *my_strchr(const char *str, char c)
{
	assert(str);
	while (*str)
	{
		while (*str++)
		{
			if (*str == c)
			{
				return str;
			}
		}
	}
	return NULL;
}