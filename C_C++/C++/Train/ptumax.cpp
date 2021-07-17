#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n,k;
        cin >>n>>k;
        int a[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        deque<int>ans;
        for (int i = 0;i<k;i++){
            while (ans.size()!=0 && a[i]>=a[ans.back()]) ans.pop_back();
            ans.push_back(i);
        }
        for (int i = k;i<n;i++){
            cout <<a[ans.front()]<<" ";
            while (ans.size()!=0 && ans.front()<=i-k){
                ans.pop_front();
            }
            while (ans.size()!=0 && a[i]>=a[ans.back()]) ans.pop_back();
            ans.push_back(i);
        }
        cout <<a[ans.front()];
        cout <<endl;
    }

    return 0;
}