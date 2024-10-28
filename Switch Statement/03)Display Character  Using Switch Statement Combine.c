#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';
    printf("\n Enter a Letter = ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'A':
        case 'P':
        case 'k':
                printf("\n Good");
                break;
        case 'F':
        case 'O':
        case 'r':
                printf("\n Fork");
                break;
        case 'h':
        case 'H':
                printf("\n Hello");
                break;
        case 'b':
        case 'B':
                printf("\n Bye");
                break;
        case 'W':
                printf("\n Karad");
                break;
        default:
                printf("\n Invalid...");
                break;
    }
    printf("\n\n Thanks");
    getch();
    return 0;
}
