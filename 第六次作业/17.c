#include <stdio.h>

int digit(int n, int k) {
    for (int i = 1; i < k; i++) {
        n /= 10;
    }
    return n % 10;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    printf("第%d位数字是%d\n", k, digit(n, k));
    return 0;
}