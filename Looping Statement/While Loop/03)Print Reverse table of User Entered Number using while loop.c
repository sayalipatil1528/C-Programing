#include<stdio.h>
#include<conio.h>
int main()
{
    int NO=0,i=10;
    printf("\n Enter a Number =>");
    scanf("%d",&NO);
    printf("\n Reverse Table of %d is => \n",NO);

    while(i>=1)
    {
        printf("\n %3d * %3d = %3d.",NO,i,(i*NO));
        i--;
    }
    getch();
    return 0;
}
