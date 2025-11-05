#include <stdio.h>
int main() {
    int a, b, m, n, temp;
    printf("请输入两个正整数：");
    scanf("%d %d", &a, &b);
    m = a;
    n = b;
    while (n != 0) {
        temp = m % n;
        m = n;
        n = temp;
    }
    int lcm = a * b / m;
    printf("最大公约数：%d\n", m);
    printf("最小公倍数：%d\n", lcm);
    return 0;
}