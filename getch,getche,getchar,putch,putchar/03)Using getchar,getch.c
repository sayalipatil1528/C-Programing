#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char ch='A';
    printf("\n Value of Character = %c \n\n",ch);
    printf("\n Enter Any Key To Move On... ");
    getch();
    system("cls");
    printf("\n Enter New Character : ");
    ch=getchar();
    printf("\n\n New Value Of Character = %c.\n",ch);
    printf("\n Thanks For Using Our App.\n Press A Key To Exit.");
    getch();
    return 0;
}
