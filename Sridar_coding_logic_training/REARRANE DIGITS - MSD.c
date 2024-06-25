/*
  9876543210
  1234567890
  1357924680
  msd

  ?? power
  1234567890            1           1234567890
  1234567890            10          123456789
  1234546890            100         12345678
  1234546890            1000        1234567
  1234546890            10000       123456
  1234546890            100000      12345
  1234546890            1000000     1234
  1234546890            10000000    123
  1234546890            100000000   12
  1234546890            1000000000  1


  while ( num / power > 9)
  {
     power *=10;
  }



  1
        1
  2                 2   10
  3     13
  4
                    24 100
  5     135
  6                 246 1000
  7
       1357
  8                2468 10000
  9
       13579
  0                24680    100000
  */

#include<stdio.h>
#include<stdlib.h>
typedef long long int big;
typedef unsigned int size;

int main()
{

       big num;
       big copy;
       int digit;
       big power;
       big even_group;
       big odd_group;

       big even_power;
       num = 1234567890;
       num = 9442161065;
       power = 1;
       while ( num / power > 9)
       {
           power *= 10;
       }
       even_group = 0;
       odd_group = 0;
       even_power = 1;
       copy = num;
       while ( power )
       {
       digit = copy / power;
       if ( digit % 2 == 0)
       {
           even_group = even_group * 10 + digit;
           even_power *=10;
       }
       else
       {
        odd_group = odd_group * 10 + digit;
       }

        copy = copy % power;
        power/=10;

       }

       printf("%lld -> %lld", num, (odd_group * even_power ) + even_group);


    return EXIT_SUCCESS;
}




















