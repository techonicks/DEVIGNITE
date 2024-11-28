#include<stdio.h>
int main()
{
    int a = 100, b = 2, c = 25, d = 25;
    int result;
    if(a > b)
         printf("\n %d greater than %d : TRUE ", a , b);
    if(b < c)
         printf("\n %d less than %d : TRUE ", b , c);    
    if(a >= b)
         printf("\n %d greater equal to %d : TRUE ", a , b);
    if(b <= c)
         printf("\n %d less equal to %d : TRUE ", b, c);
    if(c == d)
         printf("\n %d equals to %d : TRUE ", c , d);
    if(c != d)
         printf("\n %d equals to %d : TRUE ", c , d);
    else
         printf("\n %d not equals to %d : FALSE ", c , d);
    getch();
    return 0;
}
