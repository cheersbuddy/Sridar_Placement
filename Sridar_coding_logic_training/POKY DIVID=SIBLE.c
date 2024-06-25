#include<stdio.h>
#include<stdlib.h>
void pd_helper( int used [], int base, int workFor, long long int conValue)
{
    // enumerate
    // loop
    if ( base == workFor )
    {
        printf("%lld\n", conValue);
        return;
    }
   // printf("%d %lld\n", workFor , conValue);
   // getch();
    int digit;
    for( digit = 1; digit < base ; digit+=1 )
    {

        if (  used [ digit ] == 0 && ( (conValue * 10 ) + digit) % workFor == 0) //
        {
            used [ digit ] = 1;
            pd_helper(used, base, workFor + 1, (conValue * 10 ) + digit);
            used [ digit ] = 0;
        }
    }
}
void polyDivisible( int base)
{
    // set the environment
    int used[ base ]; // VLA
    int ind;
    for( ind = 0; ind < base ; ind+=1)
        used [ ind ] = 0;

    pd_helper(used, base, 1,0); //
}
int main()
{

    polyDivisible(10);

    return EXIT_SUCCESS;
}

