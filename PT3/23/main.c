#include <stdio.h>
int main(){
	unsigned short hour,minute,second;
	unsigned long result;
	printf("how many hours\n");
	scanf("%hu",&hour);
	printf("minutes\n");
	scanf("%hu",&minute);
	printf("seconds\n");
	scanf("%hu",&second);
	result=second+minute*60+hour*60*60;
	printf("that's %ld seconds",result);
	return 0;
}
