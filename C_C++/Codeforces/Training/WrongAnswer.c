#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int tmp[6];
        int pos = 0;
        int z = a[i];
        if (z < 0)
            a[i] *= -1;
        while (a[i] > 0)
        {
            tmp[pos] = a[i] % 10;
            a[i] /= 10;
            pos++;
        }
        if (z < 0)
        {
            int miz = 99;
            int posz = -1;
            for (int j = 0; j < pos; j++)
            {
                if ((tmp[j] != 0) && (tmp[j] < miz))
                {
                    miz = tmp[j];
                    posz = j;
                }
            }
            int sw1 = tmp[0];
            tmp[0] = tmp[posz];
            tmp[posz] = sw1;
            for (int j = 1; j < pos - 1; j++)
            {
                for (int k = j + 1; k < pos; k++)
                {
                    if (tmp[j] > tmp[k])
                    {
                        int sw = tmp[j];
                        tmp[j] = tmp[k];
                        tmp[k] = sw;
                    }
                }
            }
        }
        else
        {

            for (int j = 0; j < pos - 1; j++)
            {
                for (int k = j + 1; k < pos; k++)
                {
                    if (tmp[j] < tmp[k])
                    {
                        int sw = tmp[j];
                        tmp[j] = tmp[k];
                        tmp[k] = sw;
                    }
                }
            }
        }
        for (int j = 0; j < pos; j++)
        {
            a[i] = a[i] * 10 + tmp[j];
        }
        if (z < 0)
            a[i] *= -1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int sw = a[i];
                a[i] = a[j];
                a[j] = sw;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}