#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int space=0,digits=0,special=0;
    char x[100];
    printf("enter a word: ");
    fgets(x,100,stdin);
    for(int i=0;x[i]!='\0';i++){
        if(isdigit(x[i]))
        {digits++;}
        else if(x[i]==' ')
        {space++;}
        else if (!isdigit(x[i])&&!isalpha(x[i])&&x[i]!='\n')
        {special++;}
    }
    printf("spaces : %d\n",space);
    printf("special : %d\n",special);
    printf("digits : %d\n",digits);
    return 0;

    }