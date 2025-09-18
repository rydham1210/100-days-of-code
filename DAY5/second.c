# include<stdio.h>
int main()
{
    int hours,minutes,seconds;
    printf("enter time in seconds",seconds);
    scanf("%d",&seconds);
    hours =seconds/3600;
    seconds =seconds%3600;
    minutes =seconds/60;
    seconds =seconds%60;
    printf("time is %02d:%02d:%02d", hours,minutes,seconds);
}

