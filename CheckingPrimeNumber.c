#include<stdio.h>
int main()
{
  int num,count=0;
  printf("Enter a Number:");
  scanf("%d",&num);

  for(int i=1;i<=num;i++)
  {  
    if(num%i==0)
      count++;
  }

  if(count==2)
  printf("%d is a prime Number",num);
  else
  printf("%d is not a prime Number",num);


    return 0;
}