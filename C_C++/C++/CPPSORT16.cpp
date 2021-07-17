#include<bits/stdc++.h>
using namespace std;
struct ptu {
    int val;
    int pos;
    int cnt;
};
bool cmp ( struct ptu a, struct ptu b){
    return a.val< b.val;
}
bool cmp2 (struct ptu a,struct ptu b){
    if (a.cnt != b.cnt){
        return a.cnt < b.cnt;
    }
    if (a.cnt == b.cnt ){
        return a.val >b.val;
    }
}
int main() {
	int t;
     cin >> t;
    while(t--){
        int n;
        cin >>n;
        int a[n+1];
        for (int i = 0;i<n;i++){
            cin >>a[i];
        }
        ptu b[n+1];
        for (int i = 0;i<n;i++){
            b[i].pos=i;
            b[i].cnt = 0;
            b[i].val = a[i];
        }
        stable_sort(b, b+n, cmp);
        b[0].cnt = 1;
        for (int i = 1;i<n;i++){
            if (b[i].val == b[i-1].val) {
                b[i].cnt +=b[i-1].cnt + 1;
                b[i-1].cnt = -1;
                b[i].pos = b[i-1].pos;
            }
            else b[i].cnt = 1;
        }
        stable_sort(b, b+n ,cmp2);
        vector<int>ans;
        for (int i = n-1;i>=0;i--){
            if (b[i].cnt!=-1){
                while (b[i].cnt>0){
                    ans.push_back(b[i].val);
                    b[i].cnt--;
                }
            }
        }
        for (int i = 0;i<ans.size();i++){
            cout <<ans[i]<<' ';
        }
        cout <<endl;
    }
	return 0;
}