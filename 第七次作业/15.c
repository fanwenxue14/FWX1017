#include <stdio.h>
int main() {
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int key, *p = arr, flag = 0, pos = 1;
    printf("请输入要查找的数：");
    scanf("%d", &key);
    while (p < arr + 15) {
        if (*p == key) {
            flag = 1;
            break;
        }
        p++;
        pos++;
    }
    if (flag)
        printf("找到，位置是第%d个\n", pos);
    else
        printf("No Found\n");
    return 0;
}