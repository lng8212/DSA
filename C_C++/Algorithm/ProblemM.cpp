#include<bits/stdc++.h>
using namespace std;
int binary(vector<int> a, int l, int r, int x){
    while (l<=r){
        int mid = (l+r)/2;
        if (a[mid]==x) return 1;
        else if (a[mid]>x) r=mid-1;
        else l=mid+1;
    }
    return -1;
}
int main (){
    int n;
    cin  >>n;
    int a[100007]={};
    for (int i=0;i<n;i++){
        cin >>a[i];
    }
    int b[100007]={};
    for (int i=0;i<n;i++){
        b[i]=a[i];
    }
    vector<int> sum;
    vector<int> value;
    sort(b,b+n);
    int S=1;
    b[n]=-1;
    for (int i=0;i<n;i++){
        if (b[i]==b[i+1]) S++;
        else {
            sum.push_back(S);
            value.push_back(b[i]);
            S=1;
        }
    }
    int max=0;
    for (int i=0;i<sum.size();i++){
        if(sum[i]>max) max=sum[i];
    }
    vector<int> check;
    for (int i=0;i<sum.size();i++){
        if (sum[i]== max) {
            check.push_back(value[i]);
        }
    }
    for (int i=0;i<n;i++){
        if (binary(check,0,check.size()-1,a[i])==1) {
            cout <<a[i];
            break;
        }
    }
    return 0;
}