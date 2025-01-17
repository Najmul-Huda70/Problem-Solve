// Najmul Huda
#include <stdio.h>
int main()
{
    unsigned int n;
    scanf("%u", &n);

    // left shift
    //int msb = 1<<(sizeof(unsigned int)*8-1);
   
    // printf("%d",sizeof(unsigned int)*8-1);
  
//    if(n & msb != 0)
//    printf("SET");
//    else
//    printf("NOT SET");

   //right shift
   int msb = n >> (sizeof(unsigned int)*8-1);
   if(msb & 1)
   printf("SET");
   else 
   printf("NOT SET");
    return 0;
}