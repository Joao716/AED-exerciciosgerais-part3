#include <stdio.h>
int main(){
	unsigned int year;
	printf("input a year\n");
	scanf("%i",&year);
	if(year%4==0){
		printf("It's a leap year");
	}else{
		printf("It's not a leap year");
	}
	return 0;
}
