#include<conio.h>
#include<stdio.h>


void main()
{
    int a,i,x,newno;
    for(i=10000;i<=99999;i++)
    {
        x=i;
        newno=0;
        while(i>0)
        {
            a=i%10;
            i=i/10;
            newno=(newno+a)*10;

        }
        if(newno/10==4*x)
                printf("%d",x);
                i=x;

    }

}
