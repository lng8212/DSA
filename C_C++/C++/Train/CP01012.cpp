#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        long long a[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
            a[i]*=a[i];
        }
        sort(a,a+n);
        bool check = 0;
        for (int i =n-1;i>1;i--){
            long long r = i;
            long long l = 0;
            while (l<r){
                if (a[l]+a[r]==a[i]) {
                    check = 1;
                    break;
                }
                else if (a[l]+a[r]>a[i]) r--;
                else l++;
            }
        }
        if (check == 1) cout <<"YES";
        else cout<<"NO";
        cout <<endl;
    }

    return 0;
}