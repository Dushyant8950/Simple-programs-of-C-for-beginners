#include<stdio.h>
int main(){
	float number1,number2,addition,subtraction,multiplication,division;
	int number3,number4,modulo;
	printf("enter 1st and 2nd numbers for Addition, Subtraction, Multiplication, division:\n");
	scanf("%f%f",&number1,&number2);
	addition=number1 + number2;
	subtraction=number1 - number2;
	multiplication=number1 * number2;
	division=number1 / number2;
	printf("enter 3rd and 4th numbers for Modulo(only Intiger numbers):\n");
	scanf("%d%d",&number3,&number4);
	modulo=number3 % number4; 
	printf("addition of two numbers is: %f\n",addition);
	printf("subtraction of two numbers is: %f\n",subtraction);
	printf("multiplication of two numbers is: %f\n",multiplication);
	printf("division of two numbers is: %f\n",division);
	printf("modulo of two numbers is: %d\n",modulo);
	return 0;
}  
