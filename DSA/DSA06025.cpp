#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int >ans;
    ans.clear();
    for (int i = 0;i<n;i++){
        ans.push_back(a[i]);
        sort(ans.begin(),ans.end());
        cout <<"Buoc "<<i<<": ";
        for (int j = 0;j<=i;j++){
            cout <<ans[j]<<" ";
        }
        cout <<endl;
    }
    
    return 0;
}