#define _CRT_SECURE_NO_WARNINGS 1
#include"my_memcpy.h"

//Ä£ÄâÊµÏÖmemcpy
void *my_memcpy(void *dst, const void *src,size_t count)
{
	assert(dst);
	assert(src);

	while (count--)
	{
		*(char *)dst = *(char *)src;
		dst = (char *)dst + 1;
		src = (char *)src + 1;
	}
	return dst;
}