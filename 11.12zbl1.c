#include<stdio.h>
int main() {
    int n;
    printf("请输入一个正整数: ");
    scanf("%d", &n);
    
    int i,j;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
        printf("%d x %d = %d\n",i,j,i*j);
    }printf("\n");
    
    return 0;
}
