// a, b sonlar berilgan.

// a va b sonlar orasidagi 2 va 3 ga bo'linadigan sonlarning sonini  konsolga chiqaring. 


#include <stdio.h>

int main(){
    int a, b, sum;
    scanf("%d %d", &a, &b);
    
    for (int i = a; i < b; i++)
    {
        if (i % 2 == 0 && i % 3 == 0)
        {
            sum++;
        }
        
    }

    printf("%d", sum);

    return 0;

    
}