#include <stdio.h>
 int main()
 {
 int n, m, i, sum =0;
 printf("\n Enter the value of m : ");
 scanf("%d", &m);
 i=m;
 printf("\n Enter the value of n : ");
 scanf("%d", &n);
 while(i<=n)
 {
 sum = sum + i;
 i = i + 1;
 }
 printf("\n The sum of numbers from %d to %d = %d", m, n, sum);
 return 0;
 }