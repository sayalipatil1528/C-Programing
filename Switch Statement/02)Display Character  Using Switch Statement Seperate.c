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
                printf("\n Good");
                break;
        case 'A':
                printf("\n Good");
                break;
        case 'P':
                printf("\n Good");
                break;
        case 'k':
                printf("\n Good");
                break;
        case 'F':
                printf("\n Fork");
                break;
        case 'O':
                printf("\n Fork");
                break;
        case 'r':
                printf("\n Fork");
                break;
        case 'h':
                printf("\n Hello");
                break;
        case 'H':
                printf("\n Hello");
                break;
        case 'b':
                printf("\n Bye");
                break;
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
