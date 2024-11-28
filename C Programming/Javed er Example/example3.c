#include <stdio.h>
int main()
{ int num;
 printf("\n Enter any number : ");
 scanf("%d", &num);
 if(num==0)
 printf("\n The value is equal to zero");
 else if(num>0)
 printf("\n The number is positive");
 else
 printf("\n The number is negative");
 return 0;
}