#include<stdio.h>>
#include<conio.h>>
int main()
{
    int NO=0,Temp=0;
    long long int Fact=0;
    printf("\n Enter a Number : ");
    scanf("%d",&NO);
    for(Temp=NO,Fact=1;Temp>0;Temp--)
    {
        Fact=Fact*Temp;
    }
    printf("\n Factorial Of %d is = %d.",NO,Fact);
    getch();
    return 0;
}
