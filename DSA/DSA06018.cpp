#include<iostream>
#include<algorithm>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int a[1001];
        for (int i =0;i<n;i++){
            cin >>a[i];
        }
        sort(a,a+n);
        int num = a[0];
        int ans = 0;
        for (int i = 0;i<n;i++){
            if (a[i]==num){
                num++;
            }
            else if (a[i]>num){
                while (a[i]>num){
                    ans++;
                    num++;
                }
                num++;
            }
            // cout <<a[i]<<" "<<num<<" "<<ans<<endl;
        }
        cout <<ans<<endl;
       
    }

    return 0;
}