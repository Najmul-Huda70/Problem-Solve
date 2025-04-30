// Najmul Huda
#include <stdio.h>

//global variable
int k = 10 ;
// file1.c
int globalVar = 10;

// file2.c
extern int globalVar; // refers to globalVar in file1.c
void func()
{
    printf("globalVar = %d\n",globalVar);
    /*
    statics variable 
    retains its value between function call
    */
   static int st = 0;
   st++;
   printf("static variable = %d\n",st);
//  printf("k = %d\n",k);
}
int main()
{
    int n; //local variable
    scanf("%d", &n);
     func();
    printf("n = %d",n);

    return 0;
}