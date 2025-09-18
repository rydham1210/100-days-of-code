# include<stdio.h>
int main()
{
    char ch;
    printf("enter ch");
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'e'|| ch == 'o'|| ch == 'i'|| ch == 'u')
    {
        printf("%c is a vowel\n", ch);
    }
    else{
        printf("%c is a consonant\n",ch);
    }    
}