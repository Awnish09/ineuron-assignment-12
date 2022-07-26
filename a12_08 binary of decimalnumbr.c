/*recursive function to print binary of a decimal numbers*/

#include<stdio.h>
#include<conio.h>

void bidecnum(int);
int main()
{
    int num;
    printf("Enter a number.\n");
    scanf("%d",&num);
    bidecnum(num);
    getch();
    return 0;
}

void bidecnum(int x)
{
    if(x>=1)
    {
        bidecnum(x/2);
        printf("%d ",x%2);
    }

}
