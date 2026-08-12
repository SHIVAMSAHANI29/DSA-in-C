#include<stdio.h>

int f(int n,int r)
{
    if(n>0)
    return (n%r)+f(n/r,r);
    else 
    return 0;
}

int main()
{
    int n;

        printf("Enter the number : ");
        scanf("%d",&n);

        printf("Answer = %d\n",f(345,10));
    return 0;
}