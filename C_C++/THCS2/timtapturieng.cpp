#include<stdio.h>
#include<string.h>
#define max 100
int main (){
    char a[max];
    gets(a);
    char b[max];
    gets(b);
    for (int i=0;i<strlen(a);i++){
        char tmp[max];
        int z=0;
        while (a[i]!=' ' && i<strlen(a)){
            tmp[z]=a[i];
            z++;
            i++;
        }
        bool check=0;
        for (int j=0;j<strlen(b);j++){
            char tmp1[max];
            int z1=0;
            while (b[j]!=' ' && j<strlen(b)){
                tmp1[z1]=b[j];
                z1++;
                j++;
            }
           if (tmp!=tmp1) {
               check =1;
               break;
           }
        }
        if (check==1) printf("%s\n",tmp);
    }
}