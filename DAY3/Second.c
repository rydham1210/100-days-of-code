# include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter x\n");
    scanf("%d", &x);
    printf("enter y\n");
    scanf("%d", &y);
    z=x;
    x=y;
    z=y;
    printf("after swapping variable x=%d,y=%d",x,y);
}