#include<stdio.h>
#include<conio.h>
int main()
{
    int NO=0,i=0;
    printf("\n Enter a Number =>");
    scanf("%d",&NO);
    printf("\n Table of %d is => \n",NO);

    for(i=1;i<=10;i++)
    {
        printf("\n %3d * %3d = %3d.",NO,i,(i*NO));
    }
    getch();
    return 0;
}
