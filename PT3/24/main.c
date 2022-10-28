#include <stdio.h>
int main(){
	double A,B,C;
	printf("insert three sides to get the volume and area\n");
	scanf("%lf",&A);
	scanf("%lf",&B);
	scanf("%lf",&C);
	double surface_area=2*(A*B+A*C+C*B),volume=A*B*C;
	printf("surface area->%f\nvolume->%f",surface_area,volume);
	return 0;
}
