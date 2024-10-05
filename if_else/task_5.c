//  a va b sonlari berilgan.  Berilgan ikkita sondan kattasini konsolga chiqaring. Agar ular teng bo'lsa 'Voy ular teng' yozuvi chiqsin.
//
#include <stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    if (a>b)
    {
        printf("%d", a);
    } else if (a<b){
        printf("%d", b);
    }else {
       printf("Teng");
    }

    return 0;
    
}
