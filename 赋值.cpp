#include<stdio.h>
int main()
{
	int mike_score;
	int john_score;
	mike_score = 89;
	john_score = 98;
	printf("Mike's score is %d",mike_score);
	printf("\nJohn's score is %d",john_score);
	john_score = mike_score;
	mike_score = 98;
	printf("\nMike's score is %d",mike_score);
	printf("\nJohn's score is %d",john_score);
	return 0;
	}
