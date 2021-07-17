#include<bits/stdc++.h>
using namespace std;

int main() {
	long long a,b,c=0;
	cin >>a>>b;
	while (a*b!=0){
		c=c+a/b;
		if (a>b) a=a%b;
		else (b=b%a);
	}
	cout <<c;
	return 0 ;
}
