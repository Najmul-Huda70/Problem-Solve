// Najmul Huda
#include <stdio.h>
int main()
{
    int num,n;
    scanf("%d %d",&num,&n);
    
    int set_nth_bit =num | (1<<n);
    
    printf("%d",set_nth_bit);

    return 0;
}