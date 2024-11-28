#include<stdio.h>
void main()
{
    unsigned char x = 80, y = 20, a, b, c, d;
    a = x & y;   			/* bitwise AND between x and y */
    b = x | y;   			/* bitwise OR between x and y */
    c = x ^ y;   			/* bitwise XOR between x and y */
    d = ~x;				/* bitwise Complement of x */
    printf("\n %d \n %d \n %d \n %d", a, b, c, d); 
    getch();
}
