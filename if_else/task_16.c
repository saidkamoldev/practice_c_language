//  a,b,c sonlari berilgan. Bu sonlar uchburchakning 3ta tomonidir.  Uchburchak ning shakli qanday ekanligini aniqlang.

// Agar teng tomonli bo'lsa  'equilateral' so'zini konsolga chiqaring.
// Agar teng yonli bo'lsa  'isosceles' so'zini konsolga chiqaring.
// Agar ixtiyoriy  bo'lsa  'scalene'  so'zini konsolga chiqaring.

#include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
 
    if (a == b && a == c && c == b)
    {
        printf("equilateral");
    }else if (a == b || b == c || c == a)
    {        
        printf("isosceles");
    }else {
        printf("scalene");
    }
    
    return 0;
}