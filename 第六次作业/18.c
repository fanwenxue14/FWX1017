#include <stdio.h>
#include <string.h>

void countChar(char str[]) {
    int len = strlen(str);
    int count[256] = {0};
    for (int i = 0; i < len; i++) {
        count[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] > 1) {
            printf("字符%c，重复次数%d\n", (char)i, count[i]);
        }
    }
}

int main() {
    char str[100];
    scanf("%s", str);
    countChar(str);
    return 0;
}