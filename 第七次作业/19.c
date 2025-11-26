#include <stdio.h>
#include <string.h>
void replaceFoo(char *str) {
    char *p = str;
    while (*p != '\0') {
        if (strncmp(p, "foo", 3) == 0) {
            *p = 'x';
            *(p + 1) = 'x';
            *(p + 2) = 'x';
            p += 3;
        } else {
            p++;
        }
    }
}
int main() {
    char str[100] = "food fool";
    replaceFoo(str);
    printf("替换后：%s\n", str);
    return 0;
}