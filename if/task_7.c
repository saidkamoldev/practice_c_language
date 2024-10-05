// a soni berilgan. Sonning musbat yoki manfiy ekanligini aniqlang. Son 0 ga teng bo'lsa, 0 ni konsolga chiqaring.
#include <stdio.h>


int main(){
    int a;

    scanf("%d", &a);

    if (a<0)
    {
    printf("-");
    } else if (a>0)
    {
        printf("+");
    } else {
        printf("0");
    }
    
    return 0;
}
