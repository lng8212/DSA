#include<bits/stdc++.h>
using namespace std;
struct point {
    int x;
    int y;
};

int main (){
    int n;
    cin >>n;
    string a;
    cin >>a;
    point b;
    b.x=0;
    b.y=0;
    for (int i = 0;i<a.size();i++){
        if (a[i]=='G') b.y++;
        if (a[i]=='L') b.x--;
        if (a[i]=='R') b.x++;
        if (a[i]=='B') b.y--;
    }
    cout <<b.x<<" "<<b.y;
}