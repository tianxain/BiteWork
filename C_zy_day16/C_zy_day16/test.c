#define _CRT_SECURE_NO_WARNINGS 1
#include"my_strcpy.h"
#include"my_strcat.h"
#include"my_strcmp.h"
#include"my_strchr.h"
#include"my_strstr.h"
#include"my_memcpy.h"
#include"my_memmove.h"

#if 0
//模拟实现strcpy
int main()
{
	char *str1 = "hello world!";
	char str2[20] = { ' ' };
	my_strcpy(str2, str1);
	printf("%s\n", str2);
	return 0;
}
#endif

#if 0
//模拟实现strcat
int main()
{
	char p1[20];
	char* p2 = "hello";
	char* p3 = "world";
	strcpy(p1, p2);
	my_strcat(p1, p3);
	printf("%s\n", p1);
	return 0;
}
#endif


#if 0
//模拟实现strchr
int main()
{
	char *str = "hello world!";
	char c;
	printf("请输入要查找的字符：");
	scanf("%c",&c);
	printf("%s\n", my_strchr(str,c));
	return 0;
}
#endif

#if 0
//模拟实现strcmp
int main()
{
	char* p1 = "hello";
	char* p2 = "world";
	printf("%d\n", my_strcmp(p1, p2));
	return 0;
}
#endif


#if 0
//模拟实现strstr
int main()
{
	char *str1 = "hello world";
	char *str2 = "world";
	printf("%s\n", my_strstr(str1, str2));
	return 0;
}
#endif

#if 0
//模拟实现memcpy
struct
{
	char name[20];
	int age;
}person, person_copy;
int main()
{
	char myname[] = "abcdefgh";
	//using memcpy to copy string
	my_memcpy(person.name, myname, strlen(myname) + 1);
	person.age = 46;

	//using memcpy to copy structure
	my_memcpy(&person_copy, &person, sizeof(person));
	printf("person_copy:%s,%d", person_copy.name, person_copy.age);
	return 0;
}
#endif


//模拟实现memmove
int main()
{
	char str[30] = "memmove an be very usefull";
	my_memmove(str + 26, str , 6);
	printf("%s\n", str);
	return 0;
}


