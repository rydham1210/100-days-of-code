
#include <stdio.h>
#include <string.h>
int main(){
    char x[100],y[100];
    printf("enter a word: ");
    fgets(x,100,stdin);
    x[strcspn(x, "\n")] = '\0'; 
    int a =strlen(x);
    for(int i=0;i<a;i++){
        y[i]=x[a-1-i];
    }
   y[a]='\0';
    if(strcmp(x,y)==0){
        printf("yes it is a pallindrome");
    }
    else
    {printf("no it is not a pallindrome");}
    return 0;
    }