// Sonlar o'qida a nuqta berilgan.
// Shu nuqtadan 0 gacha bo'lgan masofani toping.

#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if (a>0)
    {
       printf("%d", a);
    } else 
    {
        printf("%d", a * -1);
    }
    
    return 0;
}