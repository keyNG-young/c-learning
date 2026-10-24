#include<stdio.h>
int main(){
	for(int i = 1;i <= 50;i = i + 1){
		if(i % 2 != 0){
			continue;		
		}
		if(i % 3 == 0){
			continue;
		}
		if(i > 40){
			break;
		}
		printf("%d\n",i);
	}
}
