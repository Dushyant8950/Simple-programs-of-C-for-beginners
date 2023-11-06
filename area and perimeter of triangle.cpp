#include<stdio.h>
int main (){
	float area,perimeter,base,height,side;
	printf("enter the value of base:");
	scanf("%f",&base);
	printf("enter the value of height:");
	scanf("%f",&height);
	printf("enter the value of side:");
	scanf("%f",&side);
	area = (base*height)/2;
	perimeter = side + side + side;
	printf("area of triangle:%f\n",area);
	printf("perimeter of triangle:%f\n",perimeter);
	return 0;
}

