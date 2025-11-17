#include<stdio.h>
int main()
{
int a;
int sum=0;
int score[10];
for(a=0;a<10;a++){
	printf("请存入%d个学生的成绩：\n",a+1);
	scanf("%d",&score[a]);
sum+=score[a];}
printf("那十个学生的平均成绩%f\n",(double)sum/10);


return 0;}
