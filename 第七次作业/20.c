#include <stdio.h>
#include <string.h>
int isEqual(char *s1, char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 == *s2;
}
int main() {
    char s1[100], s2[100];
    printf("请输入第一行字符串：");
    gets(s1);
    printf("请输入第二行字符串：");
    gets(s2);
    if (isEqual(s1, s2))
        printf("两行字符串一致\n");
    else
        printf("两行字符串不一致\n");
    return 0;
}