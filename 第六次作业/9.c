int mystrlen(char str[])
{ 
    int i;
    for(i=0; str[i]!='\0';i++);
    return(i);
}
int main()
{
    char str[100];
    int len;
    printf("请输入字符串：");
    scanf("%s", str);
    len = mystrlen(str);
    printf("字符串长度为：%d\n", len);
    return 0;
}