// a soni berilgan.

// a sonini n chi darajasini hisoblaydigan dastur yozing  va hosil bo'lgan sonni konsolga chiqaring.

#include <stdio.h>

int main(){
    int a, n;
    int sum = 1;
    scanf("%d %d", &a, &n);

    for (int i = 0; i < n; i++)
    {
        sum = sum * a;
    }

    printf("%d", sum);
    return 0 ;
    
}