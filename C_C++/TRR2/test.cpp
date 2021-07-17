#include<bits/stdc++.h>
using namespace std;
  

int findPairs(int arr[],int n,int x)
{
    int l = 0, r = n-1;
    int result = 0;
  
    while (l < r)
    {
        
        if (arr[l] + arr[r] >= x)
        {
            result += (r - l);
            l++;
        }
  
      
        else
            r--;
    }
  
    return result;
}
  

int main()
{
    int t;
    cin >>t;
    while (t--){
        int n,k;
        cin >>n>>k;
        int a[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        sort(a,a+n);
        cout <<findPairs(a,n,k)<<endl;

    }
    return 0;
}