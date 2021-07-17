#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,q;
    cin >> n >> q;
    vector<long long> a;
    for (int i = 0; i < n; i++)
    {
        long long z;
        cin >>z;
        a.push_back(z);
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l > r)
            swap(l, r);
        vector<long long>::iterator low,up;
        low =lower_bound (a.begin(), a.end(), l);
        up =upper_bound (a.begin(), a.end(), r);
        cout <<(up-low)<<endl;
    }
    return 0;
}