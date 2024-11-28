#include <stdio.h>

int main(int argc, char const *argv[])
{
    float price[3];
    printf("Enter the price of the items:- \n");
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%f",&price[i]);
    }
    printf("The prices of the items are:- ");
    for(i=0;i<3;i++)
    {
        printf("%f\t",price[i]);
    }
    return 0;
}
