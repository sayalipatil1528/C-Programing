#include<stdio.h>>
#include<conio.h>>
int main()
{
    int NO=0,Fact=0,Temp=0;
    printf("\n Enter a Number : ");
    scanf("%d",&NO);
    Temp=NO;
    Fact=1;
    while(Temp>0)
    {
        Fact=Fact*Temp;
        Temp--;
    }
    printf("\n Factorial Of %d is = %d.",NO,Fact);
    getch();
    return 0;
}
