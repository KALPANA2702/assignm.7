//wap to print prime number btw two given number
#include<stdio.h>
int main()
{
    int i,j,n,f;
    printf("enter two number");
    scanf("%d %d",&f,&n);
    for(i=f+1;i<=n-1;i++)
     {
        for(j=2;j<=i;j++)
         {
            if(i%j==0)
            break;
         }
               if(i==j)
                 {
                   printf("\n%d",i);
                  }
          }
   return 0;
}
     