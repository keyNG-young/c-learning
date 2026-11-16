//输入3个数a，b，c，要求按由大到小的顺序输出

#include<stdio.h>
int main()
{
	int a,b,c,t;
	printf("请输入a b c的值："); 
	scanf("%d %d %d",&a,&b,&c);
	
	if(a < b){
		t = a; a = b; b = t;
	}
	if(a < c){
		t = a; a = c; c = t;
	}
	
	if(b < c){
		t = b; b = c; c = t;
	}
	
	printf("由大到小的顺序是：%d %d %d",a,b,c);
}
