#include<stdio.h>
int main(){
	int arr[5];
	
	printf("请输入五个整数：\n");
	for(int i = 0;i < 5;i++){
		scanf("%d",&arr[i]);
	}
	printf("输入完毕！\n");
	for(int i = 0;i < 5;i++){
		printf("%d\n",arr[i]);
	}
}
