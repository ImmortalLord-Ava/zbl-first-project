#include<stdio.h>
int main()
{
int n;
printf("输入一个数字：");
scanf("%d",&n);

for(int a=1;a<=n;a++){
for(int b=1;b<=n;b++)
printf("%d",(a-1)*n+b);
printf("\n");}

return 0;






}
