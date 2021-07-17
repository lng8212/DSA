#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[n+1];
        for (int i =0;i<n;i++){
            cin >>a[i];
        }
        stack<int> solve;
        stack<int> pos;
        int arr[n+1];
        for (int i = 0;i<n;i++){
            arr[i]= -1;
        }
        solve.push(a[0]);
        pos.push(0);
        for (int i = 1 ;i<n;i++){
            while (solve.size()>0 && a[i]>solve.top()){ 
                arr[pos.top()]=a[i];
                solve.pop();
                pos.pop();
                
            }
            solve.push(a[i]);
            pos.push(i);
        }
        for (int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout <<endl;
    }

    return 0;
}