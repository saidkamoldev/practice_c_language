// a, b, c, d sonlar berilgan.

// Agar ularning qiymati barchasi musbat   bo'lsa true konsolga chiqaring bo'lmasa false ni konsolga chiqaring. 
#include <stdio.h>

int main(){

int a, b, c, d;
scanf("%d %d %d %d", &a, &b, &c, &d);

if (a>=0 && b>=0 && c >=0 && d >=0)
{
    printf("true");
}else if (a>=0 && b>=0 && c >=0 && d<0)
{
   printf("%d", d);
}else if (a>=0 && b>=0 &&  c <0)
{
    printf("%d", c);
}else if (a>=0 && b<0 )
{
    printf("%d", b);
}else if (a<0)
{
   printf("%d", a);
}else{
  printf("false");
}

return 0;





}