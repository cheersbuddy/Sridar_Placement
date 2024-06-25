#include<stdio.h>
#include<stdlib.h>
int main()
{
    int octNum;
    int deciNum;
    int octPower;
    int digit;
    int copy;
    octNum = 30071  ;
    copy = octNum;
    deciNum  = 0;
    octPower = 1;
    while ( copy )
    {
    digit = copy  % 10;
    deciNum += (digit * octPower);
    copy /= 10;
    octPower *= 8;
    }
    printf("(%d)8 = (%d)10", octNum, deciNum);




    return EXIT_SUCCESS;
}
