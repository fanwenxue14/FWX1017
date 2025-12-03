#include <stdio.h>
int main() {
    int a = 3, b = 5, c = 7, max;
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("最大的值是：%d\n", max);
    return 0;
}