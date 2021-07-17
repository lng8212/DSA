#include<stdio.h>
#include<string.h>

int main (){
    char a[1000];
    scanf("%s", &a);
    int s=0;
    for (int i=0;i<strlen(a);i++){
        s=s+(a[i]-'0');
    }
    printf("%d",s);
    return 0;
}