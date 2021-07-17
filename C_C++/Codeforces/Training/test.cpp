
#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int z = 1; z <= 27; z++)
    {
        long long s = 1;
        for (int i = 2; i <= z; i++)
        {
            s = s * i;
            while (s % 10 == 0)
            {
                s /= 10;
            }
            s = s % 10;
        }
        printf("%d %lld\n", z,s);

    }

    return 0;
}