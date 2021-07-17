#include <bits/stdc++.h>
using namespace std;

int a[20], n;
bool Left[20], Right[20];
bool check[20];
void ktao()
{
    for (int i = 0; i < 20; i++)
    {
        check[i] = false;
        Left[i] = false;
        Right[i] = false;
    }
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check[j] == false && Left[i-j+n] == false && Right[i+j-1] == false)
        {
            check[j] = true;
            Left[i-j+n] = true;
            Right[i+j-1] = true;
            a[i] = j;
            if (i == n)
            {
                for (int z = 1; z <= n; z++)
                {
                    cout << a[z] << ' ';
                }
                cout << endl;
            }
            else
                Try(i + 1);
            check[j] = false;
            Left[i-j+n] = false;
            Right[i+j-1] = false;
        }
    }
}
int main()
{
    cin >> n;
    ktao();
    Try(1);
    return 0;
}