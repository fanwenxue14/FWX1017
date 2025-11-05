#include <stdio.h>
int main() {
    int day = 10, sum = 1;
    while (day > 1) {
        sum = (sum + 1) * 2;
        day--;
    }
    printf("小明妈妈总共买了%d块巧克力\n", sum);
    return 0;
}