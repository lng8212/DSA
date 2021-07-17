#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        vector<int > a;
        a.resize(n);
        for (int i = 0;i<n;i++){
            cin>>a[i];
        }
        int k , x;
        cin >>k>>x;
        vector<int>::iterator l,u;
        l = lower_bound(a.begin(),a.end(),x);
        u = upper_bound(a.begin(),a.end(),x);
      
        int low  = l - a.begin();
        int up = u - a.begin();
        while (a[low] == x && low >=0) low--;
        priority_queue<int, vector<int>, greater<int> > ans;
        while (k>0){
            if (low >= 0) {
                ans.push(a[low--]);
                k--;
            } 
            if (up <n) {
                ans.push(a[up++]);
                k--;
            }
            if (low <0 && up >=n) break;
        }
        while (ans.size()>0){
            cout<<ans.top()<<' ';
            ans.pop();
        }
        cout <<endl;
    }
    return 0;
}