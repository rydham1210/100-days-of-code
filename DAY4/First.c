# include<stdio.h>
int main()
{
    int x,y;
    printf("enter x\n");
    scanf("%d", &x);
    printf("enter y\n");
    scanf("%d", &y);
    x=y;
    printf("after swapping variable x=%d,y=%d",x,y);
}