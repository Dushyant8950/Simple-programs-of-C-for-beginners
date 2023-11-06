#include<stdio.h>
#include<math.h>
int main(){
	float n,CubeRoot;
	printf("enter number:");
	scanf("%f",&n);
	CubeRoot=cbrt(n);
	printf("number is = %f and cube root is = %f",n,CubeRoot);
	return 0;
}
