//输入5个整数，找出其中最小的数。用函数的嵌套调用来处理。参考课本P180

#include<stdio.h>


int min2(int x,int y){
	return (x < y ? x : y);
}    //声明函数min2

	int min5(int a,int b,int c,int d,int e){
		int m1 = min2(a,b);
		int m2 = min2(c,d);
		int m3 = min2(m1,m2);
		return min2(m3,e);
	}   //声明函数min5 

int main()
{
	int a,b,c,d,e;
	printf("请输入5个整数：");
	scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
	printf("最小的数为：%d",min5(a,b,c,d,e));
}
