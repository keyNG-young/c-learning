#include<stdio.h>
int main()
{
	int a[10];
	int i,j,t;
	printf("请输入10个学号：");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(j=0;j<9;j++){
		for(i=0;i<9-j;i++){
			if(a[i]>a[i+1]){
				t = a[i];a[i] = a[i+1];a[i+1] = t;
			}
		}
	}
	printf("学号从小到大排列是：");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}
