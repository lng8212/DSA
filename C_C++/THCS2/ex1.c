#include<stdio.h>
#include<math.h>
int ucln (int a,int b){
	while (a*b!=0){
		if (a>b) a=a%b;
		else b=b%a;
	}
	int x= a+b;
	return x;
}
int bcnn(int a,int b){
	return a*b/ucln(a,b);
}
int main(){
	int n;
	scanf("%d", &n);
	while (n--){
		int a,b;
		scanf("%d%d", &a,&b);
		printf("%d %d\n", ucln(a,b),bcnn(a,b));
	}
	return 0;
}		