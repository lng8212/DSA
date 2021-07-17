#include <bits/stdc++.h>
using namespace std;

int n;
int a[15];

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<int> > ans;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<int>beginz;
        for (int i = 1;i<=n;i++){
            beginz.push_back(a[i]);
        }
        ans.push_back(beginz);
        int z = n;
        while (z > 1)
        {
            for (int i = 1; i < z; i++)
            {
                a[i] = a[i] + a[i + 1];
            }
            vector<int> tmp;
            for (int i = 1; i < z; i++)
            {
                tmp.push_back(a[i]);
            }
            ans.push_back(tmp);
            z--;
        }
        for (int i = ans.size()-1;i>=0;i--){
            cout <<"[";
            for (int j = 0;j<ans[i].size();j++){
                if (j<ans[i].size()-1) cout <<ans[i][j]<<" ";
                else cout <<ans[i][j];
            }
            cout <<"]"<<" ";
        }
        cout <<endl;
    }

    return 0;
}