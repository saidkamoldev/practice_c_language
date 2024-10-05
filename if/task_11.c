// c char berilgan. Berilgan  char alfavit  yoki raqam ekanligini aniqlang. Agar alfavit bo'lsa 'alpha' ni  konsolga chiqaring,  agar son bo'lsa 'son' ni  konsolga chiqaring.
#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);

    if (c >='0' && c <='9')
    {
        printf("son");
    } else 
    {
        printf("alpha");
    }

    return 0;
    
}
