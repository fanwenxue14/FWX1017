#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    if (isPrime(n)) {
        printf("%d是素数\n", n);
    } else {
        printf("%d不是素数\n", n);
    }
    return 0;
}