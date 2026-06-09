#include<stdio.h>
int main()
{
  int num1,num2,GCD=1;
  printf("Enter 1st number:");
  scanf("%d",&num1);

  printf("Enter 2nd number:");
  scanf("%d",&num2);
  
  for (int i =1; i<=num1 && i<=num2; i++)
  { if(num1%i==0 && num2%i==0)
   {  
    GCD=i;
           }
   
  }

  { printf("%d is the GCD of %d and %d",GCD,num1,num2);}

    return 0;
}