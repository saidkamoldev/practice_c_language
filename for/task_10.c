// a, b sonlar berilgan.

//  a va b sonlari orasidagi musbat sonlar sonini toping  va shuni konsolga chiqaring.  b sonini ham inobatga oling.
#include <stdio.h>

int main(){
    int a, b, sum;

    scanf("%d %d", &a, &b);

    for (int i = a; i < b; i++)
    {
        if (i >= 0)
        {
        sum++;
        }
        
    }


    printf("%d", sum);
    return 0;
    
}