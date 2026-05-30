#include<stdio.h>
int main()
{  int n,i;

    printf("Enter a Number:");
    scanf("%d",&n);

    printf("multiplication of %d is:\n",n);

    for(int i=1;i<=10;i++)
    {  
         printf("%d*%d=%d\n",n,i,n*i);
    }
  
    return 0;
}