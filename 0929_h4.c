#include <stdio.h>
int main()
{
    int student=5;
    int parking = 1<<2;
    int office = 1<<3;
    printf("停車場權限:%d\n",parking); 
    printf("學生有無停車場權限:%d\n",student&parking); 
    printf("學生有無老師辦公室權限:%d\n",student&office); 


    return 0 ;
}