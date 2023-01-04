#include <stdio.h>

void primos(int n, int p1, int p2)
{
    int j;
    for(p1=n-1;;p1--)
    {
        for(j=2;j<p1;j++)
        {
            if(p1%j==0)
                break;
        }

        if(j==p1)
        {
            printf("%d\n",p1);
            break;
        }
    }

    for(p2=n+1;;p2++)
    {
        for(j=2;j<p2;j++)
        {
            if(p2%j==0)
                break;
        }

        if(j==p2)
        {
            printf("%d\n",p2);
            break;
        }
    }


}


void main()
{
    int n, b=0, a=0;


    scanf("%d",&n);
    primos (n, b, a);

}
