#include<bits/stdc++.h>
using namespace std;

int main (){
    char a[100];
    gets(a);
    char b[100];
    strcpy(b,a);
    char *p[100];
    char *p1[100];
    int n=0,n1=0;
    for (p[n]=strtok(a," ");p[n]!=NULL;p[++n]=strtok(NULL," "));
    for (p1[n1]=strtok(b," ");p1[n1]!=NULL;p1[++n1]=strtok(NULL," "));
    for (int i=0;i<n1;i++){
        strupr(p1[i]);
    }
    for (int i=0;i<n;i++){
        if (strcmp(p1[i],p[i])==0) printf("%s ", p[i]);
    }
    
}
