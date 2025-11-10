#include<stdio.h>
#include<stdlib.h>//包含rand() 和 srand函数
#include<time.h>//包含time()函数
int main()
{
        srand(time(NULL));
	int a;
	int b = rand()%100 + 1;
	
	while(1){
	printf("猜数字游戏现在开始！\n");
	printf("请输入你的猜测：\n");
	scanf("%d",&a);
	if(a>b){
                 printf("太大了\n");
	}else if(a<b){
		         printf("太小了\n");
	}else{
		         printf("恭喜你，猜对了\n`");
	                 break;	}
	}
                  return 0;
}
