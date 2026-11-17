#include <stdio.h>
int main()
{
    int weight;
    int water[7];
    int sum=0;
    float average;
    int result;
    printf("請輸入您的體重(公斤):");
    scanf("%d",&weight);
    result=weight*30;
    for(int i=0;i<7;i++)
    {
      printf("請輸入第%d天的飲水量(毫升):",i+1);
      scanf("%d",&water[i]);  
      sum=sum+water[i];
    }
    average=sum/7;
    printf("7天平均每日飲水量:%.2f毫升\n",average);
    printf("每日建議飲水量:%d 毫升",result);
    if (average>=result)
    {
        printf("評估結果：已達到每日建議飲水量！\n");
    }
    else
    {
        printf("評估結果：未達到每日建議飲水量！\n");
    }
    return 0;
}