#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int copy;
    long long int bin_num;
    int remainder;
    long long int power;


    power = 1;
    num = 12345;
    num = 1234;
    num = 1234;
    bin_num = 0;

    copy = num;
    while ( copy )
    {
    remainder = copy % 2;
    bin_num = ( remainder * power ) + bin_num;
    copy /= 2;
    power *= 10;

    }

    printf("(%d)10 = (%lld)2", num, bin_num);

return EXIT_SUCCESS;
}











