#include <stdio.h>
int main()
{
    int n, b = 0;
    scanf("%d", &n);
    int a[n];
    int c[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            if (a[j] == a[i])
            {
                b++;
            }
            j++;
        }
        c[i] = b;
        b = 0;
        i++;
    }
    int ma = c[0];
    i = 0;
    while (i < n)
    {
        if (c[i] > ma)
            ma = c[i];
        i++;
    }
    i = 0;
    while (i < n)
    {
        if (c[i] == ma)
        {
            printf("%d %d", a[i], ma);
            break;
        }
        i++;
    }
}