#include <stdio.h> 
int main() 
{
    int i , j ,k ;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ",j);
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("@",k);
        }
        printf("\n");
    }
    return 0 ;

}