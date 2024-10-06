// n soni berilgan (n  uch xonali son deb hisoblang).
// Shu son Armstrong raqami hisoblanadimi yoki yo'qmi ?

// Agar Armsrong raqami bo'lsa  konsolga  true bo'lmasa false chiqaring.

// Armstrong raqam.  n = 153  agar (1*1*1) + (5*5*5) + (3*3*3) = 153. 

// Bu Armstrong raqami deyiladi  bunda sonning raqamlarining kub (153  , 3 xonali bo'lgani uchun )  darajasi yig'indisi o'sha sonning o'ziga teng.

// Masalan: n = 1634  (1*1*1*1) + (6*6*6*6)+ (3*3*3*3)+(4*4*4*4) = 1634
// bunda raqamlarinig 4 chi darajani hisoblaymiz chunki 1634 to'r  xonali son.  Bu son ham Armstrong raqam deyiladi. 

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int bol = n;
    int sum = 0;
    int num = 0;   
    int size =0;
    int mult =0;

    while (n!=0)
    {
      sum =  n % 10;
      num = num * 10 + sum;
      size++;
      n = n/ 10;
     

    }
    n = 0;
    sum = 0;
    while (num !=0)
    {
        int pex = 1;
        mult =num % 10;
    for (int i = 1; i <= size; i++)
    {
       pex = mult *pex;
    //    printf("%d\n", mult);
    }
    sum+=pex;
    num /=10;
    }

if (sum == bol)
{
    printf("true");
}else
{
    printf("fasle");
}


    printf("%d\n", sum);
    
   
   
    
   
    
  
    
   


    return 0;
    
}