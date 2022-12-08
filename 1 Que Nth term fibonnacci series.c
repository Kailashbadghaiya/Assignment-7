#include<stdio.h>
#include<conio.h>
int main()
{
    int num,a=0,b=1,c=0 ;

    // fibonnaci series nth term
    printf("Enter a number :");
    scanf("%d",&num);

    for(int i=2;i<=num;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("The %d th fibonnaci number is %d",num,b);
    return 0;
}
