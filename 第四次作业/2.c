#include <stdio.h>
int main()
{
    int x=2,y=6,z=3;
    do
        y=y-1;
        while(z-->0&&++x<5);
        printf("x=%d\t y=%d\t z=%d\n",x,y,z);
        return 0;
}