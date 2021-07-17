#include <bits/stdc++.h>
using namespace std;
//  long long nCk[1000][1000];
//  long long C (int n, int k){
//     if( k==n || k==0) return 1;
//     if (k==1) return n;
//     if (nCk[n][k]) return nCk[n][k];
//     nCk[n][k]=C(n-1,k)+C(n-1,k-1);
//     return nCk[n][k];
// }
int k;
long long a[100050];
long long check(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (a[n])
        return a[n];
    for (int i = 1; i <= k; i++)
    {
        a[n] += check(n - i);
    }
    return a[n];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n >> k;
        cout << check(n)<<endl;
    }

    // for(int i=0;i<n;i++){
    //     for (int j=0;j<=i;j++){
    //         cout <<C(i,j)<<' ';
    //     }
    //     cout <<endl;
    // }
    return 0;
}