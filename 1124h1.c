#include <stdio.h>
int main()
{
    int num[5]={50,20,80,10,30};
    int i,j,temp;
    for(i=0;i<5;i++)
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
printf("排序結果:");
for(i=0;i<5;i++)
{
    printf("%d",num[i]);
}
return 0 ;
}