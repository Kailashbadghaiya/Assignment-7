#include<stdio.h>
#include<conio.h>
int main()
{
    int H,x,y ;

    printf("Enter a number :");
    scanf("%d%d",&x,&y);

    for(H=x<y?x:y;H>=1;H--)
        if((x%H==0) && (y%H==0))
            break ;
    {
        printf("HCF is %d",H);
    }
    return 0;
}
