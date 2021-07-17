#include <bits/stdc++.h>
using namespace std;

int n;
int a[20];
bool unused[20];
vector<string> kq1;
vector<string> kq2;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (unused[j] == 0)
        {
            unused[j] = 1;
            a[i] = j;
            if (i == n - 1)
            {
                string tmp = "";

                for (int z = 0; z < n; z++)
                {
                    char c = a[z] + 'A' - 1;

                    tmp += c;
                }
                kq1.push_back(tmp);
            }
            else
            {
                Try(i + 1);
            }
            unused[j] = 0;
        }
    }
}
void Try2(int i)
{
    for (int j = 1; j <= n; j++)
    {
        a[i] = j;
        if (i == n - 1)
        {

            string tmp2 = "";
            for (int z = 0; z < n; z++)
            {

                char c1 = a[z] + '0';

                tmp2 += c1;
            }

            kq2.push_back(tmp2);
        }
        else
        {
            Try2(i + 1);
        }
    }
}
int main()
{
    cin >> n;

    kq1.clear();
    memset(unused, 0, sizeof(unused));
    kq2.clear();

    Try(0);
    Try2(0);
    for (int i = 0; i < kq1.size(); i++)
    {
        for (int j = 0; j < kq2.size(); j++)
        {
            cout << kq1[i];
            cout << kq2[j];
            cout << endl;
        }
    }
    return 0;
}