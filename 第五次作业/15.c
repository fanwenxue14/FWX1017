#include <stdio.h>
#define N 5
int main() {
    int a[N][N] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int i, sum = 0;
    for (i = 0; i < N; i++) {
        sum += a[i][i];
        sum += a[i][N - 1 - i];
    }
    if (N % 2 == 1) {
        sum -= a[N / 2][N / 2];
    }
    printf("两条对角线元素和为：%d\n", sum);
    return 0;
}