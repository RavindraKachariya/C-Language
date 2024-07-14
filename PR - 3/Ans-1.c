#include<stdio.h>

int main()
{
    char letter = 'a';

    do
    {
        printf("%c ",letter);
        letter+=4;
    }while( letter <= 'z' );
}