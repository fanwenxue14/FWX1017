#include <stdio.h>
int main() {
    int num, digit, count = 0, reverse = 0, temp;
    printf("请输入一个不多于5位的正整数：");
    scanf("%d", &num);
    temp = num;

    switch (temp) {
        case 0 ... 9:
            count = 1;
            break;
        case 10 ... 99:
            count = 2;
            break;
        case 100 ... 999:
            count = 3;
            break;
        case 1000 ... 9999:
            count = 4;
            break;
        case 10000 ... 99999:
            count = 5;
            break;
        default:
            printf("输入超出范围\n");
            return 0;
    }

    printf("① 位数：%d\n", count);

    printf("② 各位数字：");
    temp = num;
    for (int i = 0; i < count; i++) {
        digit = temp / (int)pow(10, count - i - 1);
        printf("%d ", digit);
        temp %= (int)pow(10, count - i - 1);
    }
    printf("\n");

    temp = num;
    printf("③ 逆序：");
    while (temp != 0) {
        digit = temp % 10;
        printf("%d", digit);
        temp /= 10;
    }
    printf("\n");

    return 0;
}