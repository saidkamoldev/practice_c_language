// a, b, c sonlar berilgan.

// Agar sonlar o'sish tartibida  joylashgan bo'lsa  1 ni konsolga chiqaring.
// Agar kamayish tartibda bo'lsa 2 konsolga chiqaring.
// Agar eng kattasi b bo'sa  b ni konsolga chiqaring.
// Agar ular teng bo'lsa 5 ni konsolga chiqaring.
// Bo'lmasa 0 ni konsolga chiqaring. 
#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a<b && b<c)
    {
        printf("1");
    }else if (a>b && b>c)
    {
        printf("2");

    }else if (a<b && c<b)
    {
        printf("%d", b);
    }else if (a == b && b ==c)
    {
        printf("5");
    }else
    {
        printf("0");
    }
    
    
    return 0;
    
    
    
}