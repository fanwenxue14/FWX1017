#include <stdio.h>
#define N 3
int main() {
    int a[N][N] = {0};
    int i = 0, j = N / 2, num = 1;
    while (num <= N * N) {
        a[i][j] = num++;
        int ni = (i - 1 + N) % N;
        int nj = (j + 1) % N;
        if (a[ni][nj] != 0) {
            i = (i + 1) % N;
        } else {
            i = ni;
            j = nj;
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}