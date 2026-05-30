
#include<stdio.h>
int main()
{ 
    int n,i;
    long long fact=1;
    printf("Enter a Number:");
    scanf("%d",&n);
    if(n<0)
    printf("Factorial is not defined");
    else
    {
    for(int i=1;i<=n;i++)
  { 
      fact=fact*i;
  }
printf("Factorial of %d is %lld",n,fact);

    }
    return 0;
}