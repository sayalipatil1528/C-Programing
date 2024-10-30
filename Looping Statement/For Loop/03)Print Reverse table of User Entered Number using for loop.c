#include<stdio.h>
#include<conio.h>
int main()
{
    int NO=0,i=0;
    printf("\n Enter a Number Go to Reverse Table=>");
    scanf("%d",&NO);
    printf("\n Reverse Table of %d is => \n",NO);

    for(i=10;i>=1;i--)
    {
        printf("\n %3d * %3d = %3d.",NO,i,(i*NO));
    }
    getch();
    return 0;
}
