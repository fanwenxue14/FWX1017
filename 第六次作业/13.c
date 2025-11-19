#include <stdio.h>

void findNum()
{
    for (int i=10;i<100;i++){
        int tens=i/10,ones=i%10;
        if(i%3==0&&(tens==5||ones==5)){
            printf("%d",i);
        }
    }
}
int main(){
    printf("符合条件的两位数：");
    findNum();
    return 0;
}