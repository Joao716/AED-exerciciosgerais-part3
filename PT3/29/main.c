#include <stdio.h>
int main(){
	int i,cont=0;
	for(i=2001;i<2101;i++){
		cont=i%4==0?cont+1:cont;
	}
	printf("%d",cont);
	return 0;
}
