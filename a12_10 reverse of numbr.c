/*recursive function to print reverse of a given numbers*/

#include<stdio.h>
#include<conio.h>

void revnum(int);
int main()
{
    int num;
    printf("Enter a number.\n");
    scanf("%d",&num);
    revnum(num);
    getch();
    return 0;
}

void revnum(int x)
{
    if(x>=1)
    {
        printf("%d",x%10);
        revnum(x/10);
    }

}
