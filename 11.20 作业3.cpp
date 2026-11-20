#include<stdio.h>

float average(float array[ ],int n){
	int i;
	float aver,sum = array[0];
	for(i=1;i<=n;i++){
		sum = sum + array[i];
	}
	aver = sum / 10;
	return(aver);
}

int main()
{
	float average(float array[ ],int n);
	float score1[5] = {98,97,96,95,94};
	float score2[10] = {120,110,122,96,95,89,134,123,107,101};
	printf("A班学生的平均成绩是：%.2f\n",average(score1,5));
	printf("B班学生的平均成绩是：%.2f",average(score2,10));
}
