#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("DEVIGNITE.txt","r");

    char letter;
    letter = fgetc(fptr);
    
    while (letter != EOF)
    {
        printf("%c",letter);
        letter = fgetc(fptr);
    }

    fclose(fptr);
    

    return 0;
}
