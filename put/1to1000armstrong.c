//  Q.1 W.A.P to print "Armstrong no. from 1 to 1000".
//Ans.
#include<stdio.h>
int main()
{
    for(int i=1;i<1000;i++)
    {
    int n=i;
    int rem,sum=0;
    int copy=n;

    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(copy==sum)
    {
    printf("%i ",sum);
    }
    }
    return 0;
}