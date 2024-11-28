#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


int main(){
    int x = 10;
    int y = 20;

    printf("Before swap x = %d, y = %d\n",x,y);

    swap_2(x,y); // pass by value
    // swap(&x,&y); // Pass by address

    printf("After swap x = %d, y = %d\n",x,y);

    return 0;
}

void swap_2(int x , int y){
    int temp = x;
    x = y;
    y = temp;

}