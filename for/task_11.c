// a soni berilgan.

// a sonini 5 chi darajasini hisoblab konsolga chiqaring
#include <stdio.h>

int main(){
    int a;
    int sum =1;
    scanf("%d", &a);

    for (int i = 0; i < 5; i++)
    {
        // printf("%d", i);
        sum = sum * a ; 
    }
    
    printf("%d", sum);
    return 0;

}