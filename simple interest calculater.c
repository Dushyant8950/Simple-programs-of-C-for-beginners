#include<stdio.h>
int main(){
	float  SimpleInterest,PrincipalAmount,Rate,Time;
	printf("enter the value of PrincipalAmount:");
	scanf("%f",&PrincipalAmount);
	printf("enter the value of Rate:");
	scanf("%f",&Rate);
	printf("enter the value of Time");
	scanf("%f",&Time);
	SimpleInterest = (PrincipalAmount * Rate * Time)/100;
	printf("SI is: %f",SimpleInterest);
	return 0;
}
