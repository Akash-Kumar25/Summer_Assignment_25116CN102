#include<stdio.h>
int main()
{  
  int num,digits,rev=0;
  int originalNum;
  printf("Enter a Number:");
  scanf("%d",&num);

  originalNum=num;
while(num!=0)
{
  digits=num%10;
  rev=rev*10+digits;
  num=num/10;

}

if(rev==originalNum)
  printf("The Given input number is a Pallindrome number.");
else
printf("The Given input number is not a Pallindrome number.");


    return 0;
}