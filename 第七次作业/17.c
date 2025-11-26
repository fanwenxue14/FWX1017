#include <stdio.h>
int sum_array(int a[], int n) {
    int sum = 0;
    int *p = a;
    while (p < a + n) {
        sum += *p;
        p++;
    }
    return sum;
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("数组和为：%d\n", sum_array(arr, 5));
    return 0;
}