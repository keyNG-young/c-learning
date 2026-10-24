#include<stdio.h>
int main()
{
	char ch = 'A';
	char* ptr = &ch;
	printf("修改前：%c\n",*ptr);
	*ptr = 'a';
	printf("修改后：%c\n",*ptr);
}
