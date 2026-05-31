#include<stdio.h>
int main()
{
  int num,digits,product=1;
  printf("Enter a Number:");
  scanf("%d",&num);

  if(num==0)
  printf("product of digits of given input number is 0.");
  
else
{
  while(num!=0)
  {
      digits=num%10;
      product=product*digits;
      num=num/10;
  }

printf("Product of digits of the given input number is %d",product);
}

    return 0;
}