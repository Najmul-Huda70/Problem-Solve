#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        float lx;
        scanf("%f", &lx);
        float ans = 12500;
        if (lx <= 50000)
        {
            printf("%f\n", (ans + (float)((lx * 100) / (float)20)));
        }
        else if (lx < 150000)
        {
            float temp = lx - 50000;
            ans += (float)((float)(temp * 100) / (float)40);
            printf("%f\n", (ans + (float)((50000 * 100) / (float)20)));
        }
        else
        {
            float temp = lx - 150000;
            ans += (float)((temp * 100) / 45);
            temp -= 50000;
            ans += (float)((float)(temp * 100) / (float)40);
            printf("%f\n", (ans + (float)((50000 * 100) / (float)20)));
        }
    }
}