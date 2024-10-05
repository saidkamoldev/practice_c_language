// a,b,c sonlari berilgan . Shu sonlar uchburchakning ichki burchaklari ekanligini aniqlang.
// Agar berilgan  sonlar uchburchakning burchaklari bo'lsa ,  true konsolga chiqaring bo'lmasa false konsolga chiqaring.
#include <stdio.h>

int main(){
    int a, b, c ;

    scanf("%d %d %d", &a, &b, &c);

    if (a<=0 | b<=0 | c <= 0)
    {
        printf("0 dan katta!!!");
    } else if (a + b + c>= 180)
    {
        printf("true");
    } else {
        printf("false");
    }
    
    return 0;
}