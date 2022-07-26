/*recursive function to print octal of a decimal numbers*/

#include<stdio.h>
#include<conio.h>

void octdecnum(int);
int main()
{
    int num;
    printf("Enter a number.\n");
    scanf("%d",&num);
    octdecnum(num);
    getch();
    return 0;
}

void octdecnum(int x)
{
    if(x>=1)
    {
        octdecnum(x/8);
        printf("%d",x%8);
    }

}
