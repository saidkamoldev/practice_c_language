// Sonlar o'qida a,b sonlari berilgan. Ular orasidagi masofani toping.
#include <stdio.h>

int main(){
    int a, b, sum;
    scanf("%d %d", &a, &b);

    if (a>b)
    {
        sum = a - b;
        printf("%d", sum);
    }else if (b>a)
    {
        sum = b - a ;
        printf("%d", sum);
    }else{
        printf("false");
    }
    
    return 0;
    
}