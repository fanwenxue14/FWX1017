#include <stdio.h>
#define PI 3.1415926
int main()
{
    float r = 5.0, circumference, area;
    circumference = 2 * PI * r;
    area = PI * r * r;
    printf("周长为%.3f\n", circumference);
    printf("面积为%.3f\n", area);
    return 0;
}