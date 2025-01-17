// Najmul Huda
#include <stdio.h>
int main()
{
    int n, pos;
    scanf("%d %d", &n, &pos);
    
    //RIGHT SHIFT
    // n = n >> pos;
    // if (n & 1)
    //     printf("SET");
    // else
    //     printf("NOT SET");
   

   // LEFT SHIFT
   int p = 1<<pos;
   if(n & p)
   printf("SET");
   else
   printf("NOT SET");
    return 0;
}