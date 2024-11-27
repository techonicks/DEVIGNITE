#include <stdio.h>

int Sum(int x, int y){
    int result =  x + y;
    return result;
}

int main(){
    int x = 10;
    int y = 20;

    int add = Sum(x,y);
    printf("Sum of this two number is : %d\n",add);


    // printf("Sum of this two number is : %d\n",Sum(x,y));

    return 0;
}