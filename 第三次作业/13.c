#include <stdio.h>
int main() {
    char gender;
    float weight;
    printf("请输入性别（m/f）和体重：");
    scanf(" %c%f", &gender, &weight);
    if (gender == 'm') {
        if (weight > 120) printf("输血量：200毫升\n");
        else printf("输血量：180毫升\n");
    } else if (gender == 'f') {
        if (weight > 100) printf("输血量：150毫升\n");
        else printf("输血量：120毫升\n");
    } else {
        printf("性别输入错误\n");
    }
    return 0;
}