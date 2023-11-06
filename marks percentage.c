#include<stdio.h>
int main(){
int physics,chemistry,mathmetics,hindi,english;
float average,total,percentage;
printf("enter the marks of physics:");
scanf("%d",&physics);
printf("enter the marks of chemistry:");
scanf("%d",&chemistry);
printf("enter the marks of mathmetics:");
scanf("%d",&mathmetics);
printf("enter the marks of hindi:");
scanf("%d",&hindi);
printf("enter the marks of english:");
scanf("%d",&english);
total = physics+chemistry+mathmetics+hindi+english;
average = total/5;
percentage = (total/500)*100;
printf("total marks is: %f\n",total);
printf("average marks is: %f\n",average);
printf("percentage is: %f\n",percentage);
return 0;
} 
