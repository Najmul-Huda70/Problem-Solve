// Najmul Huda
#include <stdio.h>
void print(int arr[],int n)
{
    // int n = sizeof(arr)/sizeof(arr[0]); use kora jai nah
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");

}
void Bouble_sort(int arr[],int n)
{
    //Bouble sort
  
   for(int i=0;i<n;i++)
   {
    int sorted = 1;
     for(int j=0;j<n-i-1;j++)
     {
        if(arr[j]>arr[j+1])
        {
            //swap
            int temp=arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            sorted=0;
        }
     }
     if(sorted) break;
   }
}
int main()
{
    int n;
    scanf("%d", &n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   //Bouble sort
   //Bouble_sort(arr,n);
    
 print(arr,n);
    return 0;
}