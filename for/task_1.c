// a soni berilgan.  0 dan a gacha bo'lgan sonlaryig'indisini toping  va yig'indini konsolga chiqaring. a sonini ham hisobga oling.
#include <stdio.h>

int main(){
    int a ;
    scanf("%d", &a);
    int sum = 0;

    for (int i = 1; i <= a; i++)
    {
        sum +=i;
    }

    printf("%d", sum );

    return 0;
    
}


