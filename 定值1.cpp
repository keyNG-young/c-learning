#include<stdio.h>
#include<math.h>
int main()
{
	const float PI = 3.14;
	int R_1 = 2;
	int R_2 = 8;
	float S_1;
	float S_2;
	S_1 = PI * pow(R_1,2);
	S_2 = PI * pow(R_2,2);
	printf("The aera of circle are %.2lf and %.2lf",S_1,S_2);
	return 0;
}
