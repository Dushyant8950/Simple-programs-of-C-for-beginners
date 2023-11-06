#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter two numbers:\n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("after swapping value of a=%d\n b=%d",a,b);
	return 0;
}
 
