/*

reverse of square of the number = square of reverse of the number

13      169     961
        31      961

12      144     441
         21     441

         a) Square the number       num * num
         b) Reverse the number      CODE
         c) Square the reversed number revnum * revnum
         b) Reverse the squared number CODE

*/










#include<stdio.h>
#include<stdlib.h>
int main()
{

    int num;
    int sqr_num;
    int rev_num;
    int sqr_rev_num;
    int rev_sqr_num;
    int copy;
    int digit;

    for ( num = 1 ; num <= 100000; num += 1)
    {
        if ( num % 10 == 0)
        {

        }
        else
        {
            sqr_num = num * num;
            // rev
            copy = num;
            rev_num = 0;
            while ( copy )
            {
                digit = copy % 10;
                rev_num = rev_num * 10 + digit;
                copy /= 10;
            }

            sqr_rev_num = rev_num * rev_num;
            // rev
            copy = sqr_num;
            rev_sqr_num = 0;
            while ( copy )
            {
                digit = copy % 10;
                rev_sqr_num = rev_sqr_num * 10 + digit;
                copy /= 10;
            }
            if ( rev_sqr_num == sqr_rev_num)
                printf("%d ", num);

        }

    }
    // 110
    //          12100       121
    //          11          121











    return EXIT_SUCCESS;
}















