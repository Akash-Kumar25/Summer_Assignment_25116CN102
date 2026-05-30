#include<stdio.h>
int main()
{
 int num,count=0;
 printf("Enter a Number:");
 scanf("%d",&num);
if(num==0)
count =1;

else{
if(num<0)
num=-num;
while (num!=0)
{
    num=num/10;
    count++;
}
}
printf("Number of digits in the given no is :%d",count);


    return 0;
}