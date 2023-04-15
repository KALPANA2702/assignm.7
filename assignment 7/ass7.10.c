//wap to print armstrong btw 1-1000
#include<stdio.h>
int main()
{
    int i,j,r,c,arm;
    for(i=1;i<=1000;i++)
    arm=0;
    c=i;
    {
       while(c!=0)
        {
        r=c%10;
        arm=arm+r*r*r;
        c=c/10;
        }
    if(arm==i)
    printf("\n %d",c);
    }
    return 0;
}