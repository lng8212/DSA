#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if (n == 2)
            cout << x <<' '<< y<<endl;
        else
        {
            int k = y - x;
            int a[100007] = {0};
            int z = 0;
            for (int i = 1; i <= k; i++)
            {
                if (k % i == 0)
                {
                    a[z] = i;
                    z++;
                }
            }
            int val=0 ;
            for (int i = 0; i < z; i++)
            {
                if (k / a[i] <= n - 1)
                {
                    val = a[i];
                    break;
                }
            }
            int s=k/val;
            cout <<x<<' '<<y<<' ';
            for (int i=1;i<=s-1;i++){
                cout <<x+(val*i)<<' ';
            }
            int kq = n-s-1;
            int temp=1;
            int check=x-val;
            while (kq>0&& check>0){
                cout <<check<<' ';
                check = x-val*(++temp);
                kq--;
            }
            temp=1;
            if (kq>0){
                while (kq>0){
                    kq--;
                    check = y+val*(temp++);
                    cout <<check <<' ';
                }
            }
            cout <<endl;
        }
        
    }

    return 0;
}