#include<iostream>
#include<cmath>
using namespace std;
int nguyento(int n){
	if (n<2) return 0;
	else{
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}
}
int main() {
	int T;
	cin >>T;
	for( int j=0;j<T;j++){
		int n;
		cin >> n;
		for (int i=2;i<=n;i++){
			if (nguyento(i) ==1 &&nguyento(n-i)==1) {
				cout<<i<<" "<<n-i<<endl;
				break;
			}
		}
		
	}
return 0 ;
}