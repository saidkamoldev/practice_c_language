//  a, b, c sonlari berilgan.

// // Berilgan 3 ta sondan nechtasi musbat ekanligini aniqlovchi dastur yozing va musbat sonlar sonini konsolga chiqaring.
#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);


    if (a>0 && b>0 && c>0)
    {
        printf("3");
    }else if (b>0 && a>0 || c >0 && b >0 || a > 0 && c >00)
    {
        printf("2");
    }else if (b>0 || a>0 || c>0)
    {
         printf("1");
    }else
    {
        printf("False");
    }

    return 0;
    
    
    
    
}