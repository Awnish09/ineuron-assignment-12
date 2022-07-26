/*recursive function to print 1st n even natural numbers*/

#include<stdio.h>
#include<conio.h>

void nevennatnum(int);
int main()
{
    int num;
    printf("Enter a number.\n");
    scanf("%d",&num);
    nevennatnum(num);
    getch();
    return 0;
}

void nevennatnum(int x)
{
    if(x>=1)
    {
        nevennatnum(x-1);
        printf("%d ",2*x);
    }

}
