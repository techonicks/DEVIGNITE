#include <stdio.h>

//function declearation
void Hello();
void Hey();
void Ask_name();
void Bye();

//Function Prototype
void Hello(){
    printf("Hello World!");
}

void Hey(){
    printf("Hey\n");
}


int main(int argc, char const *argv[])
{
    printf("Let's call a Function!!\n");
    Hello(); // function call

    Hey();
    Ask_name();
    Bye();

    return 0;
}

void Ask_name(){
    printf("What's Your Name??");
}

void Bye(){
    printf("Bye!!");
}