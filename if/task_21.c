// a, b, c sonlar berilgan.

// Agar shu solarning ikkitasi o'zaro teng bo'lsa  teng bo'lmagan sonni konsolga chiqaring, aks holda 0 ni chiqaring. 
#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b)
    {
        printf("%d", c);
    }else if (b == c)
    {
        printf("%d", a);
    }else if (a==c)
    {
        printf("%d", b);
    }else
    {
        printf("0");
    }
    
    return 0;
    
    
}