#include<bits/stdc++.h>
using namespace std;


int main (){

    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int *a = new int [n+1];
        for (int i = 1;i<=n;i++){
            cin >>a[i];
        }
        int left = -1, right = -1;
        for (int i = 1 ;i<n;i++){
            if (a[i]>a[i+1]) {
                left = i;
                break;
            }
        }
        for (int i = n;i>1;i--){
            if (a[i]<a[i-1]) {
                right = i;
                break;
            }
        }
        int minz = 1e8;
        int maxz = -1;
        for (int i = left;i<=right;i++){
            minz = min(minz, a[i]);
            maxz = max(maxz, a[i]);
        }
        for(int i = 1;i<left;i++){
            if (a[i]>minz) {
                left =i;
                break;
            }
        }
        for (int i =n;i>right;i--){
            if (a[i]<maxz) {
                right = i;
                break;
            }
        }
        cout << left <<" "<<right<<endl;

    }


    return 0;
}