#include <stdio.h>
#include <string.h>
int main() {
    char str[100], *p, *q;
    printf("请输入字符串：");
    gets(str);
    p = str;
    q = str + strlen(str) - 1;
    while (p < q) {
        char temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
    printf("反向输出：%s\n", str);
    return 0;
}