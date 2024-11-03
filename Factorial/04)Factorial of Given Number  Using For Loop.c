#include<stdio.h>>
#include<conio.h>>
int main()
{
    int NO=0,Fact=0;
    for(NO=7,Fact=1;NO>0;NO--)
    {
        Fact=Fact*NO;
    }
    printf("\n Factorial Of Given number is = %d.",Fact);
    getch();
    return 0;
}
