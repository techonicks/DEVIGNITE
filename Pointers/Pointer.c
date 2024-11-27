#include <stdio.h>

int main(int argc, char const *argv[])
{
   /*Declear and initialize a variable*/
   int number = 10;

   /*Declear a pointer of 'number' variable*/
   int *ptr;

   /*Initialize the pointer*/
   ptr = &number; 


   printf("%d\n",&number);  //Memory address of 'number'
   printf("%d\n",ptr);      //Value of the pointer
   printf("%d\n",*ptr); //value of 'number' by its pointer : Dereferencing
   printf("%d\n",&ptr);

    return 0;
}
