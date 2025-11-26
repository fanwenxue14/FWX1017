#include <stdio.h>
#include <stdbool.h>
bool search(int a[], int n, int key) {
    int *p = a;
    while (p < a + n) {
        if (*p == key)
            return true;
        p++;
    }
    return false;
}
int main() {
    int arr[5] = {1, 3, 5, 7, 9};
    int key;
    printf("请输入要查找的数：");
    scanf("%d", &key);
    if (search(arr, 5, key))
        printf("找到\n");
    else
        printf("未找到\n");
    return 0;
}