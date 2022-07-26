/*recursive function to print 1st n odd natural numbers in reverse*/

#include<stdio.h>
#include<conio.h>

void noddnatnumrev(int);
int main()
{
    int num;
    printf("Enter a number.\n");
    scanf("%d",&num);
    noddnatnumrev(num);
    getch();
    return 0;
}

void noddnatnumrev(int x)
{
    if(x>=1)
    {
        printf("%d ",2*x-1);
        noddnatnumrev(x-1);
    }

}
