#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[10];
        for (int i = 1; i <= 9; i++)
        {
            a[i] = i;
        }
        string s = "";
        int z = 9;
        if (n > 45)
            cout << "-1";
        else
        {
            while (n > 0)
            {
                if (n >= a[z])
                {
                    char b = z + '0';
                    s = b + s;
                    n -= z;
                    z--;
                }
                else {
                    char b = n+'0';
                    s=b+s;
                    n=0;
                }
            }
            cout << s;
        }
        cout <<endl;
    }
}