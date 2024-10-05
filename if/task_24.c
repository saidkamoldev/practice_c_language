// a soni berilgan. 1 - 999 sonlar orasida.

// Agar a soni 1 honali son bo'lsa 1 ni return qiling.
// Agat a soni 2 honali son bo'lsa 2 ni return qiling.
// Agar a soni 3 honali bo'lsa 3 ni return qiling.
#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if (a>= 0 && a<=9)
    {
        printf("1");
    } else if (a>=10 && a<=99)
    {
         printf("2");
    }else if (a>=100 && a<=999)
    {
        printf("3");
    }
    

    return 0;
    
    
}