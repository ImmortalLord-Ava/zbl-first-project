#include<stdio.h>
int main()
{
        int a,c;
        char b;
        printf("请输入第一个数字：\n");
        scanf("%d",&a);
        printf("请输入运算符：\n");
        getchar();
        scanf("%c",&b);
        printf("请输入第二个数:\n");
        scanf("%d",&c);
        int sum;
        switch(b){
                case '+':sum=a+c;break;
                case '-':sum=a-c;break;
                case '*':sum=a*c;break;
                case '%':if(c!=0){
                                 sum=a/c;
                         }
                         else{
                                 printf("分母不可以为0！");
                         }break;

                default:printf("请重新输入运算符!");}
                printf("结果是：%d\n",sum);
        return 0;

}

