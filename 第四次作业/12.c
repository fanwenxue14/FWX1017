#include <stdio.h>
int main()
{
    int i,n;
    long long s=1;
    printf("Please enter n:");
    scanf("%d",&n);
    if(n < 0){
        printf("n不能为负数\n");
        return 0;
    }
    for(i=1;i<=n;i++)
    s=s*i;
    printf("%d!=%11d\n",n,s);
    return 0;
}