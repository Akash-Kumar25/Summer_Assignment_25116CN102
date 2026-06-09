#include<stdio.h>
int main()
{  
  int i,j,num1,num2,count;
  printf("Enter 1st number:");
  scanf("%d",&num1);

  printf("Enter 2nd number:");
  scanf("%d",&num2);
  
  printf("The prime numbers between %d and %d is: ",num1,num2);
  
  for( i=num1+1; i<num2;i++)
  {
    count=0;

    for( j=1;j<=i;j++)
    {
      if(i%j==0)
      { count++;
      }
    }
      if(count==2)
      { printf("%d ",i) ;
      }
  }
  
    return 0;
}