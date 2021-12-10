#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0;
    char b,c;
    do
    {
        printf("if transaction T1 want to lock data object \n");
        scanf("%c",&b);

        if(a==0 && b=='y')
        {
        a=1;
        b='n';
        }

        else if(a==1)
            printf("data object is locked");

        printf("if transaction T2 want to lock data object \n");
        scanf("%c",&b);

        if(a==0 && b=='y')
        {
            a=1;
            b='n';
        }
        else
            printf("data object is locked");

        printf("\n if transaction want to release data object \n");
        scanf("%c",&b);

        if(a==1 && b=='y')
            a=0;

        printf("do you want to continue");
        scanf("%c",&c);
    }
    while(c=='y');
    getch();
}
