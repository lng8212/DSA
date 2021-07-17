#include <bits/stdc++.h>
using namespace std;
int n;
int a[30];
// void Input (){
//     for (int i=1;i<=n;i++){
//         a[i]=i;
//     }
// }
bool check[100];
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check[j] == 0)
        {
            a[i] = j;
            check[j] = 1;
            if (i == n)
            {
                for (int q = 1; q <= n; q++)
                {
                    cout << a[q];
                }
                cout << ' ';
            }
            else
                Try(i + 1);
            check[j] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        // Input ();
        memset(check, 0, sizeof(check));
        Try(1);
        cout << endl;
    }
    return 0;
}