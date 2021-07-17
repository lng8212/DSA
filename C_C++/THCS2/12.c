#include<stdio.h>
#include<string.h>
int main (){
    char a[1000];
    scanf("%s", &a);
    int mark=0;
    for (int i=0;i<strlen(a);i++){
        if (a[i]!=a[strlen(a)-i-1]) {
            mark=1;
            break;
        }
    }
    if (mark==0) printf("YES");
    else printf("NO");

    return 0;
}