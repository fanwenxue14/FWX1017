#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr;
    int **pp = &p;
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(*pp + i));
    }
    printf("\n");
    return 0;
}