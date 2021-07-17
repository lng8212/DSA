#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 27; i++)
    {
        int ans = 1, a2 = 0, a5 = 0;
        for (int j = 1;j <= i; j++)
        {
            int k = j;
            while (k % 2 == 0)
            {
                a2++;
                k /= 2;
            }
            while (k % 5 == 0)
            {
                a5++;
                k /= 5;
            }
            ans = (ans * (k % 10)) % 10;
        }
        for (int j = 1; j <= a2 - a5; j++)
        {
            ans = (ans * 2) % 10;
        }

        printf("%d %d\n",i, ans);
    }

    return 0;
}