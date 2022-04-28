#include<conio.h>
#include<stdio.h>


void main()
{
    int a,n=1000,i,j,k,d1,d2;
    while(n<9999)
    {
        for(i=1;i<=n/2;i++)
        {
            a=i*i;
            if(a==n)
            {
                d2=n%100;
                d1=(n-d2)/100;
                for(j=1;j<=d1/2;j++)
                {
                    a=j*j;
                    if(a==d1)
                    {
                        for(k=0;k<=d2/2;k++)
                        {
                            a=k*k;
                            if(a==d2)
                                printf("\n%d",n);
                        }
                    }
                }
            }
        }
        n=n+1;
    }
}
