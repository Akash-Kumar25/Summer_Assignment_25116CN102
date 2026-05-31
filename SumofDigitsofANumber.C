#include<stdio.h>
int main()
{
  int num,digits,sum=0;
  printf("Enter a Number:");
  scanf("%d",&num);

  while (num!=0)
  {
    digits=num%10;
    sum=sum+digits;
    num=num/10;
  }
  printf("Sum of digits of the Given Input number is=%d",sum);

  
    return 0;
}