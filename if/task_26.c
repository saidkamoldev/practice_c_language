// a, b, c sonlar berilgan (0 emas).

// Agar  3 ta son ham toq bo'lsa 1 ni konsolga chiqaring. 
// Agar 3 ta son ham juft bo'lsa 2 ni konsolga chiqaring. 
// Agar xohlagan bittasi toq bo'lsa 3 ni konsolga chiqaring.
// Agar shartlarni qanoatlantirmasa  0 ni konsolga chiqaring.

#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
    {
        printf("2");
    }else if (a % 2 == 1 && b % 2 == 1 && c % 2 == 1)
    {
        printf("1");
    }else if ( a % 2 == 1 || b % 2 == 1 || c % 2 == 1)
    {
        printf("3");
    }else{
        printf("0");
    }
    
    
    return 0;
}