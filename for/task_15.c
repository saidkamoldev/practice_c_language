//  n  soni berilgan.

// Ketma ketlikni  berilgan   1 + 4 + 9 + 16 +  ... + n*n . Shu ketma ketlikning yig'indisini  hisoblang  va  natijani konsolga chiqaring.

// Masalan n = 6

// Bunda  1 dan 6 gacha bo'lgan sonlarning kvadrati yig'indisini xisoblash kerak.  

// Ya'ni  1 + 4 + 9 + 16 + 25  + 36 = 91 

// To'liq  aytadigan bo'lsam:  1*1 + 2*2 + 3*3 +  4*4 + 5*5 + 6*6     buni  boshqacha qilib yozadigan bo'lsak 1 + 4 + 9 + 16 + 25 + 36   va bularning yig'indisi  91  bo'ladi va 91 ni konsolga chiqarish kerak.
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int sum =0;

    for (int i = 0; i <= n; i++)
    {
        sum += i * i ;
      
    }

    printf("%d", sum);

    return 0;
    
}