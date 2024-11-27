#include <stdio.h>

void Print_Array(int marks[],int length); // declearation

void Print_Array(int marks[],int length){ //prototype
    int i;
    for(i = 0; i<length; i++){
        printf("%d\t",marks[i]);
    }
}

int main(){

    int marks[5] = {10,20,30,40,50};
    Print_Array(marks,5);
    return 0;
}