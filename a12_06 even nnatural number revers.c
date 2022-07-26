/*recursive function to print 1st n even natural numbers in reverse*/

#include<stdio.h>
#include<conio.h>

void nevennatnumrev(int);
int main()
{
    int num;
    printf("Enter a number.\n");
    scanf("%d",&num);
    nevennatnumrev(num);
    getch();
    return 0;
}

void nevennatnumrev(int x)
{
    if(x>=1)
    {
        printf("%d ",2*x);
        nevennatnumrev(x-1);
    }

}
