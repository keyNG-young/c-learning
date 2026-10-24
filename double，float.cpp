#include <stdio.h>
int main ()
{
	float float_1;
	float float_2;
	float_1 = 11.27;
	float_2 = 11.12345678910;
	printf("float_1:%.2f",float_1);
	printf("\nfloat_2:%.11f",float_2);
	double double_1;
	double_1 = 11.12345678910;
	printf("\nfloat_2:%.10f",float_2);
	printf("\ndouble_1:%.10lf",double_1);
	return 0;
}
