// a, b, c sonlar berilgan (0 emas).

// Agar xohlagan 2 tasi juft bo'lsa 1 ni konsolga chiqaring.
// Agar xohlagan 2 tasi toq bo'lsa 2 ni konsolga chiqaring
// bo'lmasa 0 ni konsolga chiqaring.
#include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a == 0 || b == 0 || c == 0)
    {
        printf("False");
    } else if (a % 2 == 0 && b % 2 == 0 || b % 2 == 0 && c % 2 ==0)
    {
       printf("1");
    } else if (a % 2 == 1 && b % 2 == 1 || b % 2 == 1 && c % 2 ==1)
    {
          printf("2");
    }else {
        printf("0");
    }
    
    
    return 0;
}