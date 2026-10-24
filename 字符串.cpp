#include<stdio.h>
int main()
{
	int n;
	char name[16];
	printf("打招呼的人数为：\n");
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++){
		printf("名字:");
		scanf("%15s",name);
		printf("你好, %s\n",name);
	}
	
	printf("你已打完所有招呼！\n");
}
