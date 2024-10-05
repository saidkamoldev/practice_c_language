// a, b, c sonlari berilgan. Berilgan uchta sonning o'rtacha qiymatini  hisoblovchi dastur yozing  va shu sonni konsolga chiqaring. 
#include <stdio.h>

int main(){

int a, b, c, sum;
scanf("%d %d %d", &a, &b, &c);

sum = a + b + c ;
printf("%d", sum / 3);

return 0;

}
