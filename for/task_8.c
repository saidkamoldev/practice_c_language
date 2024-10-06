// a, b sonlar berilgan.

// a va b sonlar orasidagi 3 ga bo'linadigan sonlarni yig'indisi va sonini konsolga chiqaring. 

#include <stdio.h>

int main(){
    int a, b, sum, num ;
    scanf("%d %d", &a, &b);

    for (int i = a; i < b; i++)
    {
        if (i % 3 == 0)
        {
            sum +=i;
            num++;
        }
        
    }

    printf("%d\n %d", sum, num);
    return 0;
    
}