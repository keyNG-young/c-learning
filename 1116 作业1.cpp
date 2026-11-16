//设计fact函数求解一个数的阶乘（例如5的阶乘：1x2x3x4x5x6）

#include<stdio.h>

long long fact(int n){
	if(n<=1)
	    return 1;
	return n * fact(n - 1);
}

int main()
{
	int n = 5;
	printf("%d! = %lld\n",n,fact(5));
} 
