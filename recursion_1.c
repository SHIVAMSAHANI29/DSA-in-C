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
    int n,r;

        printf("Enter the value of n and r : ");
        scanf("%d %d",&n,&r);

        printf("Answer = %d\n",f(n,r));
    return 0;
}