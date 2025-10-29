#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x); //改之前代码错在6-8行
    if (x == 0)
        y = 0;
    else if (x > 0)
        y = x + 3;
    else
        y = x - 3;
    printf("y=%d\n", y);
    return 0;
}