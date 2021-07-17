#include<bits/stdc++.h>
using namespace std;
int binary (int a[],int l, int r, int x){
    int ans = -1;
    while (l<=r){
        int mid = (l+r)/2;
        if (a[mid]==x) {
            ans = mid;
            r=mid-1;
        }
        else if (a[mid]<x) l = mid +1;
        else r = mid -1;
    }
    return ans;
}
int first(int arr[], int low, int high, int x, int n)
{
 
    if (high >= low) {
 
    
        int mid = low + (high - low) / 2;
 
      
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
 
      
        if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
 
        
        return first(arr, low, (mid - 1), x, n);
    }
 
    return -1;
}
int main (){

    int t;
    cin >>t;
    while (t--){
        int n,m;
        cin >>n>>m;
        int a[n+1],b[m+1];
        int vs[n+1],temp[n+1];
        for (int i=0;i<n;i++){
            cin >>a[i];
            vs[i]=0;
            temp[i]=a[i];
        }
        for (int i=0;i<m;i++){
            cin >>b[i];
        }
        vector<int> c;

        sort(temp,temp+n);
        for (int i=0;i<m;i++){
            int f =first(temp,0,n-1,b[i],n);
            if (f!=-1){
                for (int j=f;(j<n&&b[i]==temp[j]);j++){
                    vs[j]=1;
                    c.push_back (temp[j]);
                }
            }
        }
        for (int i=0;i<n;i++){
            if (vs[i]==0){
                c.push_back(temp[i]);
            }
        }
        for (int i=0;i<c.size();i++){
            cout <<c[i]<<' ';
        }
        cout <<endl;
    }
    return 0;
}