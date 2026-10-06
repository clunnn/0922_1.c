#include <stdio.h> 
int main() 
        { int high ; 
            printf("請輸入身高(CM) :"); 
            scanf("%d",&high); 
            if (high>=120) 
            { 
                printf ("可搭乘雲霄飛車"); 
            } else { 
                printf ("身高不足，無法搭乘雲霄飛車"); 
            } return 0 ;
         }