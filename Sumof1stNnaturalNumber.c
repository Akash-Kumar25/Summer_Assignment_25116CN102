#include<stdio.h>
int main(){
   
int n,Sum;
printf("Enter a number:");
scanf("%d",&n);
if (n<=0)
printf("Not valid");
else{
 Sum=n*(n+1)/2;

printf("Sum of First N natural no:%d",Sum);
}
return 0;
}