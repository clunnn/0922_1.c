#include <stdio.h>
int main()
{
    float num[5];
    int i,j;
    float temp;
    float avg;
    float sum=0;
    for(i=0;i<5;i++)
    {
        printf("請輸入第%d位選手時間:",i+1);
        scanf("%f",&num[i]);
        sum=sum+num[i];
    }
        for(i=0;i<5-1;i++)
        {
        for(j=0;j<4-i;j++)
        {
            if(num[ j ]>num[ j+1 ])
            {
                temp=num[j];
                num[ j ]=num[ j+1 ];
                num[ j+1 ]=temp;
            }
        }
    }
for(i=0;i<5;i++)
{
    printf("第%d名:%.1f秒\n",i+1,num[i]);
}
avg=sum/5;
printf("平均完成時間:%.2f秒\n",avg);
return 0 ;
}