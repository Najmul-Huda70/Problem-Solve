// Najmul Huda
#include <stdio.h>
int main()
{
    static int i;
    printf("%d\n",i);
    printf("%d\n",i++);
    printf("%d\n",i++);

    printf("%d\n",++i);
    printf("%d\n",++i);

    return 0;
}