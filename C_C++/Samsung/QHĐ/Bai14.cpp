#include<bits/stdc++.h>
using namespace std;

int N,V;
int A[1005];
int C[1005];
int kq[1005][1005];
void findz (){
	for (int i=1;i<=N;i++){
		for (int j=1;j<=V;j++){
			if (A[i]>j) kq[i][j]=kq[i-1][j];
			else {
				kq[i][j]=max(kq[i-1][j], (kq[i-1][j-A[i]]+ C[i]));
			}
		}
	}
}
int main() {
	int T;
	cin >>T;
	while (T--){
		
		cin >>N>>V;
		for (int i=1;i<=N;i++){
			cin >>A[i];
		}
		for (int i=1;i<=N;i++){
			cin >>C[i];
		}
		findz();
		cout <<kq[N][V]<<endl;
	}
	
	return 0;
}
 