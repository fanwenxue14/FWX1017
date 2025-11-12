#include<stdio.h>
int main()
{ 
    int a[4] = {0};
    int i, sum = 0;
    for (i=0;i<4;i++) scanf("%d",&a[i]);
    for (i=0;i<4;i++)  sum += a[i];
    printf("%d ", sum);
    return 0;
}