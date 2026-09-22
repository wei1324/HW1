#include <stdio.h>

int main(void)
{
    int a, b, c;
    int largest, smallest;
    printf("輸入3個值，將找出最大最小值：\n");
    scanf("%d%d%d", &a, &b, &c);

    largest = a;
    smallest = c;

    if (largest < b) {
        largest = b;
    }

    if (largest < c) {
        largest = c;
    }

    if (smallest > b) {
        smallest = b;
    }

    if (smallest > a) {
        smallest = a;
    }

    printf("最大值是%d\n", largest);
    printf("最小值是%d\n", smallest);

    return 0;
}