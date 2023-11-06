#include<stdio.h>
int main(){
	int a,b,c;
	float average;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	average=(a+b+c)/3;
	printf("average of three numbers is:%f\n",average);
	return 0;
} 
