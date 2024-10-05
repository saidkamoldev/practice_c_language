//  a soni berilgan. Berilgan son 5 ga bo'linadimi? Agar bo'linsa  konsolga true bo'lmasa false chiqaring.
#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if (a % 5 ==0)
    {
        printf("true\n");
    } else
    {
        printf("false\n");
    }
    
    return 0;
}

