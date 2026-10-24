#include <stdio.h>
int main()
{
	int int_1 = 80;
	printf("int_1:%d", int_1); 
	char char_1 = 'A';
	printf("\nchar_1:%d,%c",char_1,char_1);
	char char_2;
	char_2 = int_1;
	printf("\nchar_2:%d,%c",char_2,char_2);
	printf("\n%zu" , sizeof(char));
}
