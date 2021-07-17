#include<bits/stdc++.h>
using namespace std;
int n,k,stop=0,a[10];
void khoitao(){
	for (int i=1;i<=n;i++){
		a[i]=i;
		
	}
}
int b[100]={0};
int j=0;
void add(){
	long long S=0;
	for (int i=1;i<=n;i++){
		S=S*10+a[i];
	}
	b[j]=S;
	j++;
}

void sinh()
{
 	int i=n-1;
 	while(i>0&&a[i]>a[i+1])
		i--;
 	if(i==0) stop=1;
 	else
 	{
		 int k=n;
 		while(a[i]>a[k])
			k--;
 		swap(a[k],a[i]);
 		int c=n,r=i+1;
 		while(r<c)
 		{
 			swap(a[c],a[r]);
 			r++;c--;
 		}
 	}
}

void hoanvi(){
	while (stop ==0){
		add();
		sinh();
	}
}
int main() {
	cin >>n>>k;
	khoitao();
	hoanvi ();
	cout <<b[k-1];
return 0 ;
}
