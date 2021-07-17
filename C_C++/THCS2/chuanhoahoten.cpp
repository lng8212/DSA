#include<stdio.h>
#include<string.h>

int main(){
    char  a[100];
    gets(a);
    strlwr(a);
    char b[100];
    int z=0;
    int i=strlen(a)-1;
    while (a[i]!=' '){
        b[z]=a[i];
        i--;
        z++;
    }
    char c[100];
    strncpy(c,a,i);
    char *p=strtok(c," ");
    while (p!=NULL){
        p[0]=p[0]-32;
        printf("%s",p);
        p=strtok(NULL," ");
    }
        printf(", ");
    strupr(b);
    for (int i=strlen(b)-1;i>=0;i--){
        printf("%c",b[i]);
    }

    
}