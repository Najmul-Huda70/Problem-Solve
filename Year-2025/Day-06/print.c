// Najmul Huda
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[3];
    int i =0;
   while(a>0)
   {
    
      int k = a%1000;
      //printf("%d\n",k);
      arr[i]=k;
      i++;
      a/=1000;
   }
for(int i=2;i>0;i--)
  {
    if(arr[i]>0) printf("%d,",arr[i]);

  }
printf("%d",arr[0]);
    return 0;
}