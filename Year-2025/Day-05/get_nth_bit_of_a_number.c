#include <stdio.h>

int main()
{
    int num, n;

    scanf("%d %d", &num, &n);
    
    int nth_bit = (num & (1 << n));

    if (nth_bit > 0)
        nth_bit = 1;
    else
        nth_bit = 0;

    printf("%d", nth_bit);

    return 0;
}
