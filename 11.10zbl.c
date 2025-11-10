#include<stdio.h>
int main()
{
	int a;
	printf("请输入你的成绩：\n");
	scanf("%d",&a);
	if(a>=90 && a<=100){
		printf("你的成绩为A");
	}else if(a>=80 && a<=89){
		printf("你的成绩为B");
	}else if(a>=70 && a<=79){
		printf("你的成绩为C");
	}else if(a>=60 && a<=69){
		printf("你的成绩为D");
	}else{
		printf("你的成绩为E");
	}
		return 0;
}
