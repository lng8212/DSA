#include<bits/stdc++.h>
using namespace std;


int main (){
	list<int> a;
	for (int i =1;i<=10;i++){
		a.push_back(i);
	}
	a.pop_front();
	a.pop_back();
	//cout <<a.front();
	list <int>::iterator it = a.begin();
	int n  = 20;
	
	advance(it,4);
	*it = n;
	int sum = 0;
	for (list <int >::iterator i = a.begin() ;i != a.end() ;i++){
		cout << *i<<' ';
	}
	cout <<sum;
}