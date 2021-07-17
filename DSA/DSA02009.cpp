#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[30];
int sum;
bool check;
void Try(int s, int dem, int i)
{
    if (check==1) return;
   if (dem == k) {
       check = 1;
       return;
   }
   for (int i = 0;i<n;i++){
     //  if (unused[i]==0){
         //  unused[i]=1;
           if (s<sum) Try(s+a[i],dem,i+1);
           else if (s>sum) return;
           else Try (0,dem+1,i+1);
          
     //  } 
      //  unused[i]=0;
   }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        check = 0;
        cin >> n >> k;
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        if (s % k != 0)
            cout << "0" << endl;
        else
        {
            sum = s / k;
            Try(0, 0, 0);
            cout<<check<<endl;
        }
    }

    return 0;
}