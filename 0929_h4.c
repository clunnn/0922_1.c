#include <stdio.h>
int main()
{
    int student=5;// 0101
    int parking = 1<<2;//權限由1變成4 0100
    int office = 1<<3;//權限由1變成8 1000
    printf("停車場權限:%d\n",parking); 
    printf("學生有無停車場權限:%d\n",student&parking); 
    printf("學生有無老師辦公室權限:%d\n",student&office); 


    return 0 ;
}