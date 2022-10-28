#include <stdio.h>
float getSalary(int salary,int num_Ofsells,float comission);
int main(){
	const int salary=600;
	const float comission=0.02;
	int num_Ofsells;
	printf("how many sells did you make\n");
	scanf("%d",&num_Ofsells);
	printf("here's your salary:%f",getSalary(salary,num_Ofsells,comission));
	return 0;
}
float getSalary(int salary,int num_Ofsells,float comission){
	int i;
	float result;
	for(i=0;i<num_Ofsells;i++){
		result+=(float)(salary*comission);
	}
	result+=salary;
	return result;
}
