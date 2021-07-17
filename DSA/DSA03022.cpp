#include<bits/stdc++.h>
using namespace std;


int main (){

    int n;
    cin >>n;
    int a[n+1];
    for (int i = 0;i<n;i++){
        cin >>a[i];
    }
    sort(a,a+n);
    vector<long long> kq;
    long long x2 = a[0]*a[1];
    long long x3 = a[n-1]*a[n-2];
    long long x4 = a[n-1]*a[n-2]*a[n-3];
    long long x5 = a[0]*a[1]*a[n-1];
    kq.push_back(x2);
    kq.push_back(x3);
    kq.push_back(x4);
    kq.push_back(x5);
    sort(kq.begin(),kq.end());
    cout <<kq[kq.size()-1];

    return 0;
}