
#include<stdio.h>
int main(){
int a,b,c=0;
printf("enter the number");
scanf("%d", &a);
for (int i =1; i < a; i++){
 if(a % i == 0)
 c = c+i;
 }
 if ( c == a){
 printf("your number is perfect");
 }
 else{
 printf("your number is not perfect");
 }
 return 0;
 }
 
