/*recursive function to print 1st n odd natural numbers*/

#include<stdio.h>
#include<conio.h>

void noddnatnum(int);
int main()
{
    int num;
    printf("Enter a number.\n");
    scanf("%d",&num);
    noddnatnum(num);
    getch();
    return 0;
}

void noddnatnum(int x)
{
    if(x>=1)
    {
        noddnatnum(x-1);
        printf("%d ",2*x-1);
    }

}
