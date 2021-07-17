#include <bits/stdc++.h>
using namespace std;
int main(){
	int T; 
	cin >> T;
	while(T--){
		int n,k;
		cin >>n>>k;
		int a[n+1];
		for (int i = 0 ;i<n;i++){
			cin >>a[i];
		}
		sort ( a,a+n);
		long long  ans = 0;
		for (int i = n-1;i>=0;i--){
			int z = upper_bound(a,a+n,a[i]-k)-a;
			//cout <<i-z-1<<endl;
			if (i-z>0) ans +=( i-z);
		}
		cout <<ans <<endl;
	}
}