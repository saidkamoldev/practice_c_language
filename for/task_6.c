// a, b sonlar berilgan.

// a va b sonlar orasidagi (butun) sonlar   yig'indisini toping (a sonini inobatga oling) va yig'indini konsolga chiqaring.

#include <stdio.h>

int main(){

    int a,b,sum;

    scanf("%d %d", &a, &b);

    for (int a ; a < b; a++)
    {
        sum +=a;
        
    }
    
    printf("%d", sum);

    return 0;

}