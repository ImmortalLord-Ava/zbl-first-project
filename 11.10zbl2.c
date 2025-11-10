#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char c ='y';
	while(c=='y'){
	srand(time(NULL));
	int b = rand()%3 + 1;
	int a;
printf("猜拳游戏");
printf("1.石头\n");
printf("2.剪刀\n");
printf("3.布\n");
printf("请出拳（1.石头，2.剪刀，3.布:\n");
scanf("%d",&a);

switch(a){
	case 1 : printf("你出了:石头\n");break;
        case 2 : printf("你出了:剪刀\n");break;
	case 3 : printf("你出了：布\n");break;
	default : printf("请重新输入数字！\n");break;
}
switch(b){
	case 1 :printf("电脑出了 :石头\n");break;
	case 2 :printf("电脑出了 :剪刀\n");break;
	case 3 :printf("电脑出了 :布\n");break;
        default : printf("请重新输入数字！\n");break;
}
if(a==1&&b==2){
	printf("你赢了\n");
}else if(a==1&&b==3){
	printf("你输了\n");
}else if(a==2&&b==3){
	printf("你赢了\n");
}else if(a==3&&b==2){
       	printf("你输了\n");
}else if(a==3&&b==1){
        printf("你赢了\n");
}else if(a==2&&b==1){ 
	printf("你输了\n");
}else if(a==b){
	printf("这局是平局！\n");
}else{
	printf("请重新输入数字\n");
}
 printf("再玩一次？(y/n)\n"); 
 getchar();
 scanf("%c",&c);}
 printf("游戏结束\n");
return 0;
}



















