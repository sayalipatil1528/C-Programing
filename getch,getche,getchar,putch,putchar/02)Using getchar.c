#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='A';
    printf("\n Value of Character = %c \n\n",ch);
    printf("\n Enter new Character Value : ");
    ch=getchar();
    printf("\n\n New Value Of Character = %c.\n",ch);
    printf("\n Thanks For Using Our App.\n Press A Key To Exit.");
    getch();
    return 0;
}
