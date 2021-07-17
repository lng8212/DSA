#include<stdio.h>
#include<string.h>
#define max 100
int main(){
    char c[max]={};
    fgets(c,max,stdin);
    int i=0;
    for (int i=0;i<strlen(c);i++){
        char tmp[max]={0};
        int z=0;
        while (c[i]!=' ' && i<strlen(c)){
            tmp[z]=c[i];
            z++;
            i++;
        }
        printf("%s\n",tmp);
    }
}