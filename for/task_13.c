// a , n sonlari berilgan (a soni 1-9 o'rtasida ).

// Ketma ketlikni hisoblang. a + aa + aaa + ........  nta a bo'ladi.

// Yig'indini konsolga chiqarish kerak. 

#include <stdio.h>

int main(){
    int a, n;
    int sum = 0;
    int num = 0;
    scanf("%d %d", &a, &n);

    for (int i = 0; i < n; i++)
    {
        sum = sum * 10 + a;
        num +=sum;

           

        
        
    }
     printf("%d\n", num);
    return 0;

}