#include<stdio.h>
#include<stdlib.h>
// public static void main (String [] name)
int main()
{
    int num;
    int revNum;
    int digit;
    int copyNum;
    num = 2896982;
    copyNum = num;
    revNum = 0;
    while ( copyNum != 0)
    {
    digit = copyNum % 10;
    // process
    // number of digits, sum of digits, armstrong, reverse
    revNum = revNum * 10 + digit;
    copyNum /= 10;

    }
    printf("%d reversed is %d", num, revNum);

   return EXIT_SUCCESS;
}
