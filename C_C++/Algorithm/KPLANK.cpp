#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stack<int> l;
        vector<int> left(n, 0);
        for (int i = 0; i < n; i++)
        {
            while (l.empty() == false && a[l.top()] >= a[i])
                l.pop();
            if (l.empty())
                left[i] = 0;
            else
                left[i] = l.top() + 1;
            l.push(i);
        }
        vector<int> right(n, 0);
        stack<int> r;
        for (int i = n - 1; i >= 0; i--)
        {
            while (r.empty() == false && a[r.top()] >= a[i])
                r.pop();
            if (r.empty())
                right[i] = n - 1;
            else
                right[i] = r.top() - 1;
            r.push(i);
        }
        int ans = 0;
        int vt1 = 0, vt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] * (right[i] - left[i] + 1) > ans)
            {
                ans = a[i] * (right[i] - left[i] + 1);
                vt1 = left[i];
                vt2 = right[i];
            }
        }
        cout << ans << ' ' << vt1 + 1 << ' ' << vt2 + 1<<endl;
    }

    return 0;
}