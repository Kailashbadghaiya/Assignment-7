#include<stdio.h>
#include<conio.h>
int main()
{
    int x,n,count=0 ;

    printf("Enter a decimal number\n");
    scanf("%d",&n);

    x=n ;

    while(x !=0)
    {
        count++ ;
        if(x&1==1)
            break ;
        else
            x=x>>1 ;
    }
    printf("First 1 from  LSB is at %d\n\n",count);
    return 0;
}
