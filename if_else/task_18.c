// a, b sonlari berilgan.
// Berilgan ikkita sondan  kichigini  toping  va shu sonni konsolga chiqaring. Agar ular teng bo'lsa 'teng' so'zini konsolga chiqaring.
#include <stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    if (a>b)
    {
        printf("%d", a);
    }if (b>a)
    {
          printf("%d", b);
    }else if (a == b){
          printf("tenng");
    }
    return 0;
    
}