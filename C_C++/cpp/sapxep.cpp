#include<iostream>
using namespace std;
int  sapxep(int &x, int &y){
	if  (x>y){
	int tmp=x;
	x=y;
	y=tmp;
	}
}
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++ ){
			sapxep(a[i],a[j]);
		}
	}
	for (int i=0;i<n;i++){
		cout <<a[i]<<endl;
	}
return 0 ;
}

