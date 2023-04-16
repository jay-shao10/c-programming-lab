#include <stdio.h>
#include <stdlib.h>
int binary(int n)
{
    if(n == 0) return 0;
    return n % 2 + binary(n/2)*10;
}
int main()
{
    int n;
    while(1)
    {
        if(n==-1)break;
        printf("Enter a number to turn it to binary(-1 to quit)");
        scanf("%d",&n);
        printf("Number %d is equivalent to binary %d\n",n,binary(n));
    }
}
