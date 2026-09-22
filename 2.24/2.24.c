#include <stdio.h>

int main(void)
{
    int a;

    printf("輸入數字\n");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("是偶數\n");
    }
    else {
        printf("是奇數\n");
    }

    return 0;
}