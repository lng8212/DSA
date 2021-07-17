#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int a[1000007] ;
 int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >>n;
    
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
    stack<int> l;
    vector<int> left(n,0);
    for (int i=0;i<n;i++){
        if (l.size() && l.top()<=a[i]){
            left[i]=l.size();
        }
        else {
            while (l.size()){
                l.pop();
            }
            left[i]=0;
        }
        l.push(a[i]);
    }
    stack<int> r;
    vector<int> right(n,0);
    for (int i=n-1;i>=0;i--){
        if (r.size() && r.top()<=a[i]){
            right[i]=r.size();
        }
        else {
            while (r.size()){
                r.pop();
            }
            right[i]=0;
        }
        r.push(a[i]);
    }
    for ( int i=0;i<n;i++){
        cout <<right[i]+left[i]+1<<' ';
    }
    return 0;
}