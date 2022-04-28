#include<conio.h>
#include<stdio.h>
#include<math.h>

void main()
{
    int a,b;
    a=1;
    b=1;

    for(a=1;a<=7;a++)
    {
        while(b<=4)
        {
            printf("%4d%4d",a,b);
            b++;
        }
        printf("\n");
        b=1;



    }
    getch();


}
