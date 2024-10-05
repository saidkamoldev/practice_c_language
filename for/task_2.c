// a soni berilgan. 0 dan a gacha bo'lgan juft  sonlar yig'indisini toping  va yig'indini konsolga chiqaring
#include <stdio.h>

int main(){
    int a, sum ;
    scanf("%d", &a);
    

    for (int i = 0; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            sum +=i;
        }
        
    }
    
    printf("%d", sum);

    return 0;
}