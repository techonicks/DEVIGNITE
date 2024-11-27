/* Q Change variable value using pointer!  */

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int number = 10;
    int *ptr = &number;

    *ptr = 20;

    printf("now number = %d \n",number);

    number++; // 21
    (*ptr)++;
    (*ptr) += 10;

    printf("%d\n",number);

    return 0;
}
