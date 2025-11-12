#include <stdio.h>
int main() {
    float height = 100, total = 100;
    int i;
    for (i = 1; i < 10; i++) {
        height /= 2;
        total += height * 2;
    }
    height /= 2;
    printf("第10次落地时共经过：%f 米，第10次反弹高度：%f 米\n", total, height);
    return 0;
}