#include<stdio.h>
int main(){
	float fahrenheit;
	printf("enter the value of fahrenheit:");
	scanf("%f",&fahrenheit);
	printf("vlaue of celcius: %f",(fahrenheit-32)*5/9);
	return 0;
}
