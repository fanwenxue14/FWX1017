#include <stdio.h>

int *find_middle(int a[], int n) {
    return &a[(n - 1) / 2];
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = find_middle(arr, 5);
    printf("中间元素是%d\n", *p);
    int arr2[4] = {1, 2, 3, 4};
    p = find_middle(arr2, 4);
    printf("中间元素是%d\n", *p);
    return 0;
}