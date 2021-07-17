#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long tu, mau;
        cin >> tu >> mau;
        while (1)
        {
            if (mau%tu ==0){
                 cout <<"1/"<<(mau/tu)<<endl;
                 break;
            }
            else {
                int ans = 1+ mau/tu;
                cout <<"1/"<<ans<<" + ";
                tu = tu*ans - mau;
                mau = mau *ans;   
            }
        }
    }

    return 0;
}