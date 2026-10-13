#include <stdio.h> 
int main() 
{
    int old;
    printf("請輸入乘客的年齡:");
    scanf("%d",&old);
    if (old<=6)
    {
        printf("免費");
    }
    else if (old<=12)
    {
        printf("兒童票");
    }
     else if (old<=64)
    {
        printf("全票");
    }
    else
    {
        printf("敬老票");
    }
    return 0 ;
}