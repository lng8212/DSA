#include <bits/stdc++.h>
using namespace std;
int checklk(long long a)
{

    while (1)
    {
        long long s = 0;
        while (a > 0)
        {
            s = s + a % 10;
            a /= 10;
        }
        if (s < 10)
        {
            return s;
        }
        else {
            a=s;
        }
    }
}

int main()
{
    int t;
     cin >>t;
     while (t--){
         string a;
         cin >>a;
         long long count=0;
         for (int i=0;i<a.size();i++){
             count = count +(a[i]-'0');
         }
         if (checklk(count)==9) cout <<1;
         else cout <<0;
         cout <<endl;
     }
    return 0;
}