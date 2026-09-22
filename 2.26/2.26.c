#include <stdio.h>

int main(void)
{
    int a,b;
    printf("輸入兩個整數\n");
    scanf("%d%d",&a,&b);
    if(b==0){
        printf("第二個數不能是0\n");
        return 0;
    }
    if(a % b == 0){
        printf("第一個數是第二個數的倍數\n");
    }
    
    else{
        printf("第一個數不是第二個數的倍數\n");
    }

    return 0;
}