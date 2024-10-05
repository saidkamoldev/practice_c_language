// Berilgan son 10 dan katta bo'lsa unga 3 ni qo'shib konsolga chiqaring.

// Agar 10 dan kichik bo'lsa 2ga ko'paytirib natijani konsolga chiqaring.

// Agar 10 ga teng bo'lsa 22 sonini konsolga chiqaring.
#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if (a>10)
    {
        printf("%d\n",a+3);
    }else if(a<10)
    {
        printf("%d\n", a *2);
    } else {
        printf("%d", 22);
    }
    
    return 0;
}