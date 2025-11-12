#include <stdio.h>
#define N 5
int main() {
    int a[N] = {3, 1, 4, 1, 5};
    int i, j, temp, maxIndex;
    for (i = 0; i < N - 1; i++) {
        maxIndex = i;
        for (j = i + 1; j < N; j++) {
            if (a[j] > a[maxIndex]) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            temp = a[i];
            a[i] = a[maxIndex];
            a[maxIndex] = temp;
        }
    }
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}