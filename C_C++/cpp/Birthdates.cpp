#include<bits/stdc++.h>
#include<string>
#include<cmath>
#include<vector>
using namespace std;
struct person{
	string nam;
	int ngay;
	int thang;
	int nam;
};
bool process(person a, person b){
	if (a.nam>b.nam) return 1;
	if (a.nam<b.nam) return 0;
    if (a.thang >b.thang) return 1;
	if (a.thang <b.thang) return 0;
	if (a.ngay >b.ngay) return 1;
    return 0;
}
int main() {
	int n;
	cin >>n;
	vector<person>Person(n);
	for (int i=0;i<n;i++){
		cin>>Person[i].name;
		cin>>Person[i].ngay;
		cin>>Person[i].thang;
		cin>>Person[i].nam;
	}
//	for (int i=0;i<n;i++){
//		cin>>Person[i].ngay;
//	}
//	for (int i=0;i<n;i++){
//		cin>>Person[i].thang;
//	}
//	for (int i=0;i<n;i++){
//		cin>>Person[i].nam;
//	}
	person Max=Person[0];
    person Min=Person[0];
	for (int i=1;i<n;i++){
		if (process(Person[i],Max)==1) Max =Person[i];
		if (process(Person[i],Min)==0) Min =Person[i];
	}
	vector<person>lon;
	for (int i=0;i<n;i++){
		if (Person[i].ngay+Person[i].thang+Person[i].nam==Max.ngay+Max.thang+Max.nam){
			lon.push_back(Person[i]);
		}
	}
	vector<person>be;
	for (int i=0;i<n;i++){
		if (Person[i].ngay+Person[i].thang+Person[i].nam==Min.ngay+Min.thang+Min.nam){
			be.push_back(Person[i]);
		}
	}
	for (int i=0;i<lon.size();i++){
		cout << lon[i].name<<endl;
	}
	for (int i=0;i<be.size();i++){
		cout <<be[i].name;
	}
return 0 ;
}
