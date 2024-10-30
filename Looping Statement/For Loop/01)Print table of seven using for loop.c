#include<stdio.h>
#include<conio.h>
int main()
{
    int NO=0,i=0;
    printf("\n Table of 7 is => \n",NO);
    for(NO=7,i=1;i<=10;i++)
    {
        printf("\n %3d * %3d = %3d.",NO,i,(i*NO));
    }
    getch();
    return 0;
}
