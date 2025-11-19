#include <stdio.h>

#define ROW 3
#define COL 3

void transpose(int a[][COL], int b[][ROW]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            b[j][i] = a[i][j];
        }
    }
}

int main() {
    int a[ROW][COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[COL][ROW];
    transpose(a, b);
    printf("转置后的数组：\n");
    for (int i = 0; i < COL; i++) {
        for (int j = 0; j < ROW; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}