#include<stdio.h>
#include<stdlib.h>
/*
sizeof
~~~~~~

* operator
* () is mandate only for data type
* gives an unsigned integer
* amount of memory used
* compile time operator

*/
int main()
{

    int data [] = { 45,56,90,12,44,66,88,99,22,28,10,49,37,28,99,26,77};
    int data_ind;
    int data_size;

    data_size = sizeof data / sizeof (int);
  //  printf("sizeof (data) = %u, sizeof(data[0])=%u\n", sizeof data, sizeof data[0]);
    int small;
    int small_ind;
    int scope_begin;
    int temp;
//    for( data_ind = 0; data_ind < data_size ; data_ind += 1)
  //          printf("%d ", data [ data_ind ]);
    for( scope_begin = 0; scope_begin < data_size ; scope_begin+=1)
    {
    small_ind = scope_begin;
    small = data [  scope_begin ];
    for( data_ind = scope_begin + 1; data_ind < data_size; data_ind += 1)
    {
        if ( data [ data_ind ] < small)
        {
            small = data [ data_ind ];
            small_ind = data_ind;
        }
    }

    temp = data [ scope_begin ];
    data [ scope_begin ] = data [ small_ind ];
    data [ small_ind ] = temp;
    }
/*
    for( data_ind = 0,printf("\n"); data_ind < data_size ; data_ind += 1)
            printf("%d ", data [ data_ind ]);
*/






    return EXIT_SUCCESS;
}
