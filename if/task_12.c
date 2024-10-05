// c char berilgan. Berilgan  char katta alfavit yoki kichik alfavit ekanlini aniqlang .
// Agar alfavit kichik bo'lsa 'lowerCase' so'zini konsolga chiqaring,  Agar alfavit katta bo'lsa 'upperCase' ni chiqaring,  agar alfavit  bo'lmasa  'none' ni  chiqaring.
#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);

    if (c>='a' && c <='z')
    {
         printf("lowerCase");
    } else
    {
        printf("UpperCase");
    }
    
    return 0;
}