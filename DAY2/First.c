# include<stdio.h>
int main()
{
    int l,b;
    printf("enter l");
    scanf("%d",&l);

    printf("enter b");
    scanf("%d",&b);

    printf("perimeter of rectangle %d", 2*(l+b));
    printf("area of rectangle %d", (l*b));
    return 0;
}