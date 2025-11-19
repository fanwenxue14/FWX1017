double fun(double x, int y)
{ 
    int i;
    double z;
    for(i=1,z=x;i<y;i++) 
        z=z* x;
    return  z;
}
int main()
{
    double x, result;
    int y;
    scanf("%lf %d", &x, &y);
    result = fun(x, y);
    printf("%lf的%d次方是%lf\n", x, y, result);
    return 0;
}