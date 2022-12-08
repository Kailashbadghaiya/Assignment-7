#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,next,n ;

    printf("Enter a number :");
    scanf("%d",&n);

    if(n==0 || n==b)
    {
        printf("Fibonacci number\n");
    }
    else
    {
        next=a+b ;
        while(next<n)
        {
            a=b ;
            b=next ;
            next = a+b ;
        }
        if(next==n)
            printf("Fibonacci");
        else
            printf("not fibonacci");
    }
    return 0;

}
