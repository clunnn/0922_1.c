#include <stdio.h>
int main()
{
    int score[3][2];
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("第%d天\n",i+1);
        for(j=0;j<2;j++)
        {
            printf("請輸入第%d種飲料銷售量:",j+1);
            scanf("%d",&score[i][j]);
        }
    }
    printf("\n銷售紀錄\n");
    for(i=0;i<3;i++)
    {
            for(j=0;j<2;j++)
            {
                printf("%d",score[i] [j]);
            }
            printf("\n");
    }
    return 0;
}