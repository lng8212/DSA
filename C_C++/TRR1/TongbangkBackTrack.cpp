#include <bits/stdc++.h>
using namespace std;

int a[20], n, s;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (s + j <= n)
        {

            
            // cout <<s<<" ";
            if (j >= a[i - 1])
            {
                s = s + j;
                a[i] = j;
                if (s == n)
                {
                    for (int t = 1; t <= i; t++)
                    {
                        cout << a[t] << ' ';
                    }
                    cout << endl;
                }
                else
                Try(i + 1);
                   s -= j;
            }

           
         
        }
    }
}
int main()
{
    // a[0]=0;
    cin >> n;
    Try(1);

    return 0;
}