/*recursive function to print squares of 1st n natural numbers*/

#include<stdio.h>
#include<conio.h>

void sqnnatnum(int);
int main()
{
    int num;
    printf("Enter a number.\n");
    scanf("%d",&num);
    sqnnatnum(num);
    getch();
    return 0;
}

void sqnnatnum(int x)
{
    if(x>=1)
    {
        sqnnatnum(x-1);
        printf("%d ",x*x);
    }

}
