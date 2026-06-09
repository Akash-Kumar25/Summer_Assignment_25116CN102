#include<stdio.h>
int main()
{  
  int num1,num2,GCD=1,LCM;
  printf("Enter 1st number:");
  scanf("%d",&num1);

  printf("Enter 2nd number:");
  scanf("%d",&num2);
  
  for(int i=1;i<=num1 && i<=num2;i++)
  { if(num1%i==0 && num2%i==0)
      GCD=i;
  }
  LCM=num1*num2/GCD;

  printf("LCM of %d and %d is %d",num1,num2,LCM);
    return 0;
}