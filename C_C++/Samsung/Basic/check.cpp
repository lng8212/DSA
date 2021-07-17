#include<bits/stdc++.h>
using namespace std;
vector<string> mu;
void Pow1 (){
    for (int i=1;i<=10;i++){
        long long m = i*i*i;
        string tt;
        string ttt;
        while (m>0){
            tt.push_back(m%10+'0');
            m=m/10;
        }
        int k =tt.size();
        for (int i=0;i<k;i++){
            ttt.push_back(tt[k-1-i]);
        }
      cout <<ttt;
       cout <<endl;
        mu.push_back(ttt);
    }
}
int main (){
    Pow1();
}