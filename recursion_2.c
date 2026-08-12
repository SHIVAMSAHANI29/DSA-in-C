#include<stdio.h>

int f(int n)
{
      if(n==1)
    return 1;
      else 
    return f(n-1)+f(n-1);
}
int f(int n);
int main()
{
    int n;

        printf("Enter the number : ");
        scanf("%d",&n);

        printf("Answer = %d\n",f(n));
    return 0;
}