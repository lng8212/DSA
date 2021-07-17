#include <bits/stdc++.h>
using namespace std;
string n;

long long ans = -1;
int x[100];
bool check (long long x){
    if (x==1) return 1;
    for (long long i = 2;i*i*i<=x;i++){
        if (i*i*i==x) return 1;
    }
    return 0;
}
void Try(int i)
{
    for (int j=0;j<=1;j++){
        x[i]=j;
        if (i==n.size()-1){
            long long tmp=0;
            for (int z =0;z<=i;z++){
                if (x[z]==1){
                    tmp = tmp*10+(n[z]-'0');
                }
            }  
            if (check(tmp)==1 && tmp>ans) ans = tmp; 
        }
        else Try(i+1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans = -1;
        cin >> n;
        Try(0);
        cout << ans << endl;
    }

    return 0;
}