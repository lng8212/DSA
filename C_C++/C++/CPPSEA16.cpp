#include <bits/stdc++.h>
using namespace std;

bool mark = 0;
void findCommon(long long ar1[], long long ar2[], long long ar3[], long long n1, long long n2, long long n3)
{

    long long i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3)
    {

        if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
        {
            mark=1;
            cout << ar1[i] << " ";
            i++;
            j++;
            k++;
        }

        else if (ar1[i] < ar2[j])
            i++;

        else if (ar2[j] < ar3[k])
            j++;

        else
            k++;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        mark =0;
        long long n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        long long a[n1 + 1], b[n2 + 1], c[n3 + 1];
        for (long long i = 0; i < n1; i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n2; i++)
        {
            cin >> b[i];
        }
        for (long long i = 0; i < n3; i++)
        {
            cin >> c[i];
        }
        findCommon(a, b, c, n1, n2, n3);
        if (mark==0) cout <<"-1";
        cout << endl;
    }
}