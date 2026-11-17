#include <stdio.h>
int main()
{
    int num[6]={101, 205, 310, 405, 520, 630} ;
    int target;
    int i;
    int found=0;
    printf("請輸入商品編號：");
    scanf("%d",&target);
    for(i=0;i<6;i++)
    {
        if(num[i]==target)
        {
        printf("找到資料,位置是:%d\n",i);
        found=1;
        break;
        }
       
    {
         if (found==0)
         {
          printf("找不到商品");
         }
       
    }
    return 0;
    }
}