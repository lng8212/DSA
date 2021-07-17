#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >>n;
        int *a = new int[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stack<int> greaterx;
        int *Greaterx = new int[n + 1];
        int *ans = new int[n+1];
        int *Smaller = new int [n+1];
        stack<int> smaller;
        greaterx.push(0);
        smaller.push(0);
        for (int i = 1; i < n; i++)
        {
            if (greaterx.size() > 0 && a[i] <= a[greaterx.top()])
            {
                greaterx.push(i);
            }
            else if (greaterx.size() > 0 && a[i] > a[greaterx.top()])
            {
                while (greaterx.size() > 0 && a[i] > a[greaterx.top()])
                {
                    Greaterx[greaterx.top()] = i;
                    greaterx.pop();
                }
                greaterx.push(i);
            }
            else
                greaterx.push(i);
        }
        for (int i = 1;i<n;i++){
            if (smaller.size()>0 && a[i]>=a[smaller.top()]){
                smaller.push(i);
            }
            else if (smaller.size()>0 && a[i]<a[smaller.top()]){
                while (smaller.size()>0 && a[i]<a[smaller.top()]){
                    Smaller[smaller.top()]=i;
                    smaller.pop();
                }
                smaller.push(i);
            }
            else smaller.push(i);
            
        }
        while (greaterx.size() > 0)
        {
            Greaterx[greaterx.top()] = -1;
            greaterx.pop();
        }
        while (smaller.size()>0){
            Smaller[smaller.top()]=-1;
            smaller.pop();
        }
        for (int i = 0;i<n;i++){
            if (Smaller[i]!=-1) 
            Smaller[i]=a[Smaller[i]];
        }
        for (int i = 0;i<n;i++){
            if (Greaterx[i]==-1) cout <<"-1"<<" ";
            else cout <<Smaller[Greaterx[i]]<<" ";
        }
        cout <<endl;
    }

    return 0;
}