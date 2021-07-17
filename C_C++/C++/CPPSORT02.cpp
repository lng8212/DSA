#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        int a[n + 1];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
     
      for (int i = 1; i < n; i++) { 
        int diff = abs(a[i] - x); 
  
        int j = i - 1; 
        if (abs(a[j] - x) > diff) { 
            int temp = a[i]; 
            while (abs(a[j] - x) > diff && j >= 0) { 
                a[j + 1] = a[j]; 
                j--; 
            } 
            a[j + 1] = temp; 
        } 
    } 
        for (long long i = 0; i < n; i++)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
}