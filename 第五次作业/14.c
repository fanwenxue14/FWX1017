#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int letter = 0, space = 0, digit = 0, other = 0, i = 0;
    gets(str);
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            letter++;
        } else if (isspace(str[i])) {
            space++;
        } else if (isdigit(str[i])) {
            digit++;
        } else {
            other++;
        }
        i++;
    }
    printf("字母：%d，空格：%d，数字：%d，其他：%d\n", letter, space, digit, other);
    return 0;
}