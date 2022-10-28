#include <stdio.h>
const double PI=3.14159265;
int main(){
	double radius;
	printf("input the radius\n");
	scanf("%lf",&radius);
	printf("the area of the circle is %lf",radius*radius*PI);
	return 0;
}
