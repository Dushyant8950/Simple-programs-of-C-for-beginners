#include<stdio.h>
#include<math.h>
int main(){
	float SGPA,Percentage;
	printf("enter sgpa:");
	scanf("%f",&SGPA);
	Percentage=(SGPA*10)-7.5;
	printf("marks percentage is:%f",Percentage);
	return 0;
}
