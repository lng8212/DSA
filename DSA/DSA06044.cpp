#include<bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cin >>n;
    int a[n+1];
    for (int i = 0;i<n;i++){
        cin >>a[i];
    }
    vector<int> c;
    vector<int> l;
    for (int i = 0; i<n;i++){
        if (i%2==0) c.push_back(a[i]);
        else l.push_back(a[i]);
    }
    sort(c.begin(),c.end());
    sort(l.begin(),l.end(),greater<int> ());
    int i = 0;
    int j = 0;
    while (i<c.size() && j<l.size()){
        cout <<c[i++]<<" "<<l[j++]<<" ";
    }
    if (n%2!=0) cout <<c[c.size()-1];
    return 0;
}