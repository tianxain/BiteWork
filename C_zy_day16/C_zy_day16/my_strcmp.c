#define _CRT_SECURE_NO_WARNINGS 1
#include"my_strcmp.h"

//Ä£ÄâÊµÏÖstrcmp
int my_strcmp(const char *str1, const char *str2)
{
	assert(str1);
	assert(str2);

	while (*str1&&*str2)
	{
		if (*str1 == *str2)
		{
			++str1;
			++str2;
		}
		else if (*str1 >= *str2)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	if (*str1 == '\0'&&*str2 == '\0')
	{
		return 0;
	}
	else if (*str1 == '\0')
	{
		return -1;
	}
	else if (*str2 == '\0')
	{
		return 1;
	}
}