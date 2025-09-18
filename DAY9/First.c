#include <stdio.h>
#include <math.h>


int main(){
    float e,f,g;
    printf("Enter value to e,f,g: ");
    scanf("%f %f %f",&e,&f,&g);
    float d=((f*f)-4*e*g);
    if(d==0)
    {
        float r=(-f+sqrt(d))/(2*e);
        printf("Roots are real and same :%.0f",r);
        
    }
    else if(d>0)
    {
        float r1=(-f+sqrt(d))/(2*e);
        float r2=(-f-sqrt(d))/(2*e); 
        printf("Roots are real and different:%.0f , %.0f ",r1,r2);   
    }
    else 
    {
        printf("Roots are complex");
    }
    return 0;
}