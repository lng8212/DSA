#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n + 1];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long i = 0;
        stack<long long> zz;
        long long k;
        long long max_area = 0;
        while (i < n)
        {
            if (zz.empty() == true || a[i] >= a[zz.top()])
            {
                zz.push(i++);
            }
            else
            {
                long long tmp;
                k = zz.top();
                zz.pop();
                if (zz.empty() == true)
                   tmp= a[k] * i;
                else
                    tmp = a[k] * (i - zz.top() - 1);
                max_area = max(tmp, max_area);
            }
        }
        while (zz.size() !=0)
        {
            long long tmp = 0;
            k = zz.top();
            zz.pop();
            if (zz.empty() == true)
                tmp=a[k] * i;
            else
                tmp = a[k] * (i - zz.top() - 1);
            max_area = max(tmp, max_area);
        }
        cout << max_area << endl;
    }

    return 0;
}