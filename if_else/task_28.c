// a, b, c sonlari berilgan.

// Shu sonlardan uch xonali son yasang. Agar xohlagan son 0 ga teng yoki  kichik bo'lsa 0 ni konsolga chiqaring.
#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a<=0 || b <=0 || c <=0)
    {
        printf("0");
    }else
    {
        printf("%d%d%d", a,b,c);
    }
    
    return 0 ;

}
