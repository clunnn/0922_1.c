#include <stdio.h>
int main()
{
    int livingroom=9;//1001
    int bedroom=5;//0101
    int kitchen=2;//0010
    int status=13;//1101
    printf("目前客廳設備: %d\n",status&livingroom);
    printf("目前臥室設備: %d\n",status&bedroom);
    printf("目前廚房設備: %d\n",status&kitchen);
    printf("廚房切換後目前設備狀態:%d\n",status^kitchen);//1101 0010 ^完剛好變成1111 = 15 
    return 0  ;
}