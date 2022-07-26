/*recursive function to print 1st n natural numbers in reverse*/

#include<stdio.h>
#include<conio.h>

void nnatnumrev(int);
int main()
{
    int num;
    printf("Enter a number.\n");
    scanf("%d",&num);
    nnatnumrev(num);
    getch();
    return 0;
}

void nnatnumrev(int x)
{
    if(x>=1)
    {
        printf("%d ",x);
        nnatnumrev(x-1);
    }

}
