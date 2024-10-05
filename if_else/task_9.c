//  Berilgan son 3 va 4 ga bo'linadimi? Agar bo'linsa konsolga 'true'  bo'lmasa falseni chiqaring.

#include <stdio.h>

int main(){
    int a ;
    scanf("%d", &a);

    if (a % 3 == 0 && a % 4 ==0)
    {
        printf("true");
    } else
    {
        printf("false");
    }
    
    return 0;
    
}
