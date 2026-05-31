#include<stdio.h>
int main()
{
   int num,digits,rev=0;
  printf("Enter a Number:");
  scanf("%d",&num);

while(num!=0)
{
   digits=num%10;
   rev=rev*10+digits;
   num=num/10;

}

printf("Reverse of the given input number is %d",rev);



    return 0;
}