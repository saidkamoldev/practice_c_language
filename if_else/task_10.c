// Berilgan yill kabisa yili ekanligini aniqlang. Agar kabisa yili bo'lsa true  konsolga chiqsin.  Agar bo'linmasa false  konsolga chiqsin.

// Kabisa yil deb 4 yilda birmarta keladigan yilga aytiladi. Shu yili kunlar soni 365 emas 366 ga teng bo'ladi. Bu yili fevral oyida 29 kun bo'ladi.

#include <stdio.h>

int main(){
    int a;

    scanf("%d", &a);

    if (a % 4 ==0)
    {
        printf("true");
    }else
    {
        printf("false");
    }
    
    return 0;
}