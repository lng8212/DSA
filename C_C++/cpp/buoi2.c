#include<stdio.h>

int soluong(char name[]) {
    int S=0;
    while (soluong(name) != '\0'){
        S++;
    }
    return S;
}
void daonguocchuoi(char s[]){
    int len=soluong (s);
    char a[len];
    for (int i=0;i<len;i++){
        a[i]=s[len-i-1];
    }
    for( int i=0;i<len;i++){
        s[i]=a[i];
    }
}
void saochep(char Dich[], char Nguon[]){
    int len= soluong(Nguon);
    for( int i=0;i <= len; i++){
        Dich[i]=Nguon[i];
    }
}
int main (){
    char hoten1[100000],hoten2[100000];
    scanf("%s",hoten1);
    saochep(hoten2,hoten1);
    printf("%s %d\n", hoten1,soluong(hoten1));
    printf("%s %d", hoten2, soluong(hoten2));
    //fgets(tenchuoi, dodai, stdin);
   /* scanf("%d",&n);
    fflush(stdin);
    fgets(chuoi1, 10000,stdin );
    printf("%d", n);
    puts(chuoi1);
    */
  
}