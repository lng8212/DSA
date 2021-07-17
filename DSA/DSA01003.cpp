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
        int a[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool check = 0;
        int i = n - 1;
        while (i > 0 && a[i] < a[i - 1])
            i--;
        if (i <= 0)
            check = 1;
        if (check == 0)
        {
            int k = n - 1;
            while (a[i-1] > a[k])
                k--;
            swap(a[i-1], a[k]);
            int l = i, r= n-1;
            while (l<=r){
                swap(a[l],a[r]);
                l++;r--;
            }
        }
        if (check ==1) {
            for (int i = 0;i<n;i++){
                cout <<i+1<<' ';
            }
        }
        else {
            for (int i = 0;i<n;i++){
                cout <<a[i]<<' ';
            }
        }
        cout <<endl;
    }

    return 0;
}