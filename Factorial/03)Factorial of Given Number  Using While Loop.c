#include<stdio.h>>
#include<conio.h>>
int main()
{
    int NO=7,Fact=1;
    while(NO>0)
    {
        Fact=Fact*NO;
        NO--;
    }
    printf("\n Factorial Of Given number is = %d.",Fact);
    getch();
    return 0;
}
