#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;
struct NTM{
	string ten;
	int w;
	int h;
	NTM(){
		ten="";
		w=0;
		h=0;
	}
};
int xuli(NTM a, NTM b){
	if (a.w>b.w) return 1;
	if (a.w<b.w) return 0;
	if (a.w==b.w){
		if (a.h>b.h) return 0;
		if (a.h<b.h) return 1;
	}
	return 2;
}
int main() {
	int n;
	cin >>n;
	vector<NTM> PRO(n);
	for (int i=0;i<n;i++){
		cin.ignore();
		getline(cin,PRO[i].ten);
		cin>>PRO[i].w;
		cin>>PRO[i].h;
	}
	NTM model=PRO[0];
	vector <NTM> danhsach;
	for (int i=1;i<n;i++){
		if (xuli(PRO[i],model)==1) model =PRO[i];
	}
	danhsach.push_back(model);
	for (int i=1;i<n;i++){
		if (xuli(model,PRO[i])==2) danhsach.push_back(PRO[i]);
	}
	for (int i=0;i<danhsach.size();i++){
		cout << danhsach[i].ten;
	}
return 0 ;
}
