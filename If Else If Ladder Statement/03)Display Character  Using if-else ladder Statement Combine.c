#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';
    printf("\n Enter a Letter = ");
    scanf("%c",&ch);

    if(ch=='a'||ch=='A'||ch=='P'||ch=='k')
    {
        printf("\n Good");
    }
    else if(ch=='F'||ch=='O'||ch=='r')
    {
        printf("\n Fork");
    }
    else if(ch=='h'||ch=='H')
    {
        printf("\n Hello");
    }
    else if(ch=='b'||ch=='B')
    {
        printf("\n Bye");
    }
    else if(ch=='W')
    {
        printf("\n Karad");
    }
    else
    {
        printf("\n Invalid...");
    }
    printf("\n\n Thanks");
    getch();
    return 0;
}
