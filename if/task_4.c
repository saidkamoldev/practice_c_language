// Sonning  juft  yoki  toqligini  aniqlang.  Agar  juft bo'lsa 'juft' so'zini return qiling. Agar toq bo'lsa 'toq' so'zini return qiling.
#include <stdio.h>

int main(){
    int a ;

    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("Juft\n");
    } else{
        printf("Toq\n");
    }
    return 0;
}

