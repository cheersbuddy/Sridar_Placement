#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int copy;
    int oct_num;
    int remainder;
    int power;


    power = 1;
    num = 12345;
    num = 23456;
    oct_num = 0;

    copy = num;
    while ( copy )
    {
    remainder = copy % 8;
    oct_num = ( remainder * power ) + oct_num;
    copy /= 8;
    power *= 10;

    }

    printf("(%d)10 = (%d)8", num, oct_num);

return EXIT_SUCCESS;
}











