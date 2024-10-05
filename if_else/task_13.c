// Berilgan son hafta kunining qaysi kuniga to'g'ri keladi .
// Agar kelgan son 1 ga teng bo'lsa 'Dushanba' ni konsolga chiqaring, 
// Agar kegan son ikkiga teng bo'lsa  'Seshanba' ni konsolga chiqaring va hz .., 
// Agar hafta kuniga to'g'ri kelmasa 'none' konsolga chiqsin.
#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if (a == 1)
    {
        printf("Dushanba");
    }else if (a ==2)
    {
        printf("Seshanba");
    }else if (a ==3)
    {
        printf("Chorshanba");
    }else if (a ==4)
    {
        printf("Payshanba");
    }else if (a ==5)
    {
        printf("Juma");
    }else if (a ==6)
    {
        printf("Shanba");
    }else if (a ==7)
    {
        printf("Yakshanba");
    }else
    {
        printf("none");
    }

    return 0;
    
    
    
}