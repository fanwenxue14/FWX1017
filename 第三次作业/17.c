#include <stdio.h>
int main() {
    float p, salary = 500;
    printf("请输入工程利润p：");
    scanf("%f", &p);
    if (p <= 1000) {
        salary += 0;
    } else if (p <= 2000) {
        salary += p * 0.10;
    } else if (p <= 5000) {
        salary += p * 0.15;
    } else if (p <= 10000) {
        salary += p * 0.20;
    } else {
        salary += p * 0.25;
    }
    printf("工资总额：%.2f元\n", salary);
    return 0;
}