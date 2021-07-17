#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        long long s=0;
        for (int i = 0; i < a.size(); i++)
        {
            string c;
            int tmp=0;
            int sum=0;
            
            for (int j = i; j < a.size(); j++)
            {
                c += a[j];
                sum=sum +(a[j]-'0');
                if (c.size()<4){
                    tmp=(tmp*10)+(a[j]-'0');
                    if (tmp%8==0 && tmp%3!=0) s++;
                }
                else {
                    int k = c.size();
                    int last= (c[k-3]-'0')*100 + (c[k-2]-'0')*10+ (c[k-1]-'0');
                    if (sum %3!=0 && last%8==0) s++;
                
                }
            }
           
        }
        cout <<s;
        cout <<endl;
    }
    return 0;
}