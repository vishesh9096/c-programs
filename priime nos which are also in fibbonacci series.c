#include<conio.h>
#include<stdio.h>


void main()
{
    int n,i,t1=1,t2=1,t3,j,a,b;
    for(i=1;i<=100;i++)
    {
        n=i;
        t1=1;
        t2=1;
        while(t1<=n)
        {
            t3=t1+t2;
            t1=t2;
            t2=t3;
            if(t3==n)
            {
                b=n;
                for(j=2;j<=b/2;j++)
                {
                    a=b%j;
                    if(a==0)
                        break;
                }
                if(a!=0)
                    printf("\n%d",b);

            }





        }
    }

    getch();

}
