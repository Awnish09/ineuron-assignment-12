/*recursive function to print 1st n natural numbers*/

#include<stdio.h>
#include<conio.h>

void nnatnum(int);
int main()
{
    int num;
    printf("Enter a number.\n");
    scanf("%d",&num);
    nnatnum(num);
    getch();
    return 0;
}

void nnatnum(int x)
{
    if(x>=1)
    {
        nnatnum(x-1);
        printf("%d ",x);
    }

}
