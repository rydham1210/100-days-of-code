#include <stdio.h>
#include <string.h>
int main(){
char a[100],z[100];
printf("enter a word: ");
fgets(a,100,stdin);
int x=strlen(a);
for(int i=0;i<x;i++){
    z[i]=a[x-1-i];
}
printf("%s",z);
//printf("%d",x);
return 0;
}