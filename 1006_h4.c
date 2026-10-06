#include <stdio.h> 
int main() 
        { int login ;
          int overage;  
          int dollars;
          int status ;
            printf("請輸入登入狀態(1已登入、0未登入) :"); 
            scanf("%d",&login); 
            printf("請輸入帳戶餘額 :"); 
            scanf("%d",&overage);
            printf("請輸入提款金額：");
            scanf("%d",&dollars);
            printf("請輸入黑名單狀態(1是、0否):");
            scanf("%d",&status);
            if(overage>=dollars && status==0)
            {
                printf("可以提款");
            }
            else
            {
                printf("無法提款");
            }
            return 0 ;
         }