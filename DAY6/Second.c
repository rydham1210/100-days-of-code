# include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a");
    scanf("%d",&a);
    if(a>=0)
    {
        if(a == 0){
        printf("a is zero");
        }else{
            printf("a is positive");
        }
    }   else{
            printf("a is negative");
        }

    return 0;
}