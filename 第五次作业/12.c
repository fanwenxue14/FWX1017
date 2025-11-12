#include <stdio.h>
#define N 5
int main() {
    int a[N] = {3, 1, 4, 1, 5};
    int i, j, temp;
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}