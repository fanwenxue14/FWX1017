#include <stdio.h>
#include <string.h>
int main() {
    char a[] = "apple", temp;
    int i, len = strlen(a);
    for (i = 0; i < len / 2; i++) {
        temp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = temp;
    }
    printf("逆转后：%s\n", a);
    return 0;
}