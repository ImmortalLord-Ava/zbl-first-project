#include<stdio.h>
int main()
{
int n;
printf("输入一个正整数：");
scanf("%d",&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=n-i;j++)
	printf(" ");
for(int t=1;t<=i;t++)
	printf("%d",t);


printf("\n");}









return 0;}
