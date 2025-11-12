#include<stdio.h>
int main()
{
   int a,b;
	printf("请输入一个正整数：\n");
        scanf("%d",&a);
	int result=0;
	
	for(b=1;b<=a;b++)
		result=result+b;
	printf("1到%d的累加和是:%d\n",a,result);
	return 0;
}
