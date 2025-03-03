// Najmul Huda
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int lsb = n & 1;
    if (lsb)
        printf("SET");
    else
        printf("NOT SET");

    return 0;
}