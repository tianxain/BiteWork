#define _CRT_SECURE_NO_WARNINGS 1
#include"my_memmove.h"

//Ä£ÄâÊµÏÖmemmvoe
void *my_memmove(void *dst, const void *src, size_t count)
{
	assert(dst);
	assert(src);

	if (dst < src || (char *)dst >= ((char *)src + count))
	{
		while (count--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst + 1;
			src = (char *)src + 1;
		}
	}
	else
	{
		dst = (char *)dst + count - 1;
		src = (char *)src + count - 1;
		while (count--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst - 1;
			src = (char *)src - 1;
		}
	}
}