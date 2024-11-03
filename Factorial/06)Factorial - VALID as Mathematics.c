#include<stdio.h>>
#include<conio.h>
int main()
{
    int NO=0,Fact=0,Temp=0;
    printf("\n Enter a Number : ");
    scanf("%d",&NO);
    Temp=NO;
    Fact=1;
    if(NO<0)
    {
        printf("\n Invalid Input!!!");
    }
    else
    {
        while(Temp>0)
        {
            Fact=Fact*Temp;
            Temp--;
        }
        printf("\n Factorial of %d is = %d.",NO,Fact);
    }
    printf("\n End Of Program...");
    getch();
    return 0;
}
