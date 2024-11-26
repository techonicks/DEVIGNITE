 #include <stdio.h>
 int main()
 {
 int n, i = 0, sum =0;
 float avg = 0.0;
 printf("\n Enter the value of n : ");
 scanf("%d", &n);
 do
 {
  sum = sum + i;
  i = i + 1;
 } while(i<=n);
 avg = (float)sum/n;
 printf("\n The sum of first %d numbers = %d",n, sum);
 printf("\n The average of first %d numbers = %.2f", n, avg);
 return 0;
 }