#include<stdio.h>
void main()
{
    int x = 100, y = 500, a = 78, b = 23, c = 99, big1, big2;
    big1 = x > y ? x : y;    	 /* To find the bigger out of x and y */
    printf("\n Bigger of %d and %d = %d ", x , y, big1);
    big2 = (a > b) ? (a > c ? a : c) : (b > c ? b : c); /* Find the biggest out of a, b, c */ 
    printf("\n Biggest of %d %d and %d = %d", a, b, c, big2); 
    getch();
}
