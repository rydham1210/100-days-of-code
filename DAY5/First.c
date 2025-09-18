# include<stdio.h>
# include<math.h>   //needed for pow()
int main()
{
   float p,r,t,si,ci;
    printf("enter the value of p and r and t \n");
    scanf("%f %f %f", &p, &r, &t);
    si=(p*r*t)/100;
    ci=p*(pow((1+r/100),t)-1);
    printf("si is =%.2f", si );
    printf("ci is =%.2f", ci);
    return 0;
}