#include <stdio.h>
const double PI=3.141592653;
int main(){
	double radius;
	printf("input the radius\n");
	scanf("%lf",&radius);
	printf("the perimeter of the circle is %lf",2*radius*PI);
	return 0;
}
