#include<bits/stdc++.h>
using namespace std;
int main (){
    long long n,k;
    cin >>n>>k;
    vector<long long>a(0,0);
    for (int i=0;i<n;i++){
        long long k;
        cin >>k;
        a.push_back(k);
    }
    sort(a.begin(),a.end()); 
   
   long long S=0;
  for (int i=0;i<n;i++){
       vector<long long>::iterator low;
       low =lower_bound(a.begin(),a.end(),a[i]+k);
       S=S+(low-a.begin())-i-1;
        }
        cout <<S;
    return 0;
}