#include<stdio.h>
#include<conio.h>
int main()
{
    int n,arm=0,r,c ;

    printf("Enter any number :");
    scanf("%d",&n);

    c=n;

    while(n>0)
    {
        r=n%10 ;
        arm = (r*r*r)+arm ;
        n=n/10 ;
    }
    if(c==arm)

        printf("Armstrong number :");
        else
            printf("not Armstrong number :");
        return 0;
}

