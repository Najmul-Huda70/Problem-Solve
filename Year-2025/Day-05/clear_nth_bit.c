// Najmul Huda
#include <stdio.h>
int main()
{
    int num,n;
    scanf("%d %d",&num, &n);
    int flip = ~(1<<n);
    int result = num & flip;
    printf("%d",result);

    return 0;
}