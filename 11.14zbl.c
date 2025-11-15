#include<stdio.h>
int main()
{
int n,i,j;
printf("请输入数字：\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
	for(j=1;j<=n-i;j++)
	printf(" ");
	for(int j=1;j<=i;j++)
        printf("%d",j);
	for(int j=i-1;j>0;j--)
	printf("%d",j);
	printf("\n");
}
return 0;
}
