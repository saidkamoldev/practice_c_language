// a, b sonlar berilgan

// a va b sonlar orasidagi juft sonlarni sonini toping   (a sonini inobatga oling) va natijani konsolga chiqaring.
#include <stdio.h>

int main(){
    int a, b;
    int sum=0;
    scanf("%d %d", &a, &b);

    for (int i = a; i < b; i++)
    {
       if (i % 2 == 0)
       {
        sum++;
       }
       
    }


    printf("%d", sum);

    return 0;
    
}