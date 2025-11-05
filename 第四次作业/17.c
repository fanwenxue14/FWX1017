#include <stdio.h>
int isPrime(int n) 
{
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() 
{
    int even;
    printf("请输入一个充分大的偶数：");
    scanf("%d", &even);
    for (int i = 2; i <= even / 2; i++) 
    {
        if (isPrime(i) && isPrime(even - i)) 
        {
            printf("%d = %d + %d\n", even, i, even - i);
            break;
        }
    }
    return 0;
}