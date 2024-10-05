// a,b,c sonlari berilgan . Shu sonlar uchburchakning tomonlari ekanligini aniqlang.
// Agar kelgan sonlar uchburchakning tomonlari bo'lsa ,true  konsolga  chiqaring,  bo'lmasa false konsolga chiqaring.
#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c );

    if (a + b > c|| a + c > b  || c + b > a )
    {
        printf("true");
    }else {
        printf("false");
    }
    
    return 0;
}