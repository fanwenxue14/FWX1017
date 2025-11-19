#include <stdio.h>

int check(int x, int y, int n) {
    if (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1) {
        return 1;
    }
    return 0;
}

int main() {
    int x, y, n;
    scanf("%d%d%d", &x, &y, &n);
    if (check(x, y, n)) {
        printf("在区间内\n");
    } else {
        printf("不在区间内\n");
    }
    return 0;
}