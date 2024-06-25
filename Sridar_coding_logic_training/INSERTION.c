#include<stdio.h>
#include<stdlib.h>
int main()
{
    //               0  1  2  3  4  5  6  7  8  9
   // int data [ ] = {10,20,30,40,50,60,70,80,90,45,67,24,68,12,20,37,28,40,51};
    int data []  = {34,12,56,89,15,51,12,30,40,90,80,70,50,45,42,51,77,43,28};
    int data_ind;
    int data_size;
    int temp;
    data_size = sizeof data / sizeof data[0];
    int unsorted;
    int swapper;
    for( unsorted = 1; unsorted <data_size; unsorted +=1)
    {
    for( swapper = unsorted ; swapper > 0 && data [ swapper] < data [ swapper - 1];swapper -=1  )
    {
            temp = data [ swapper ];
            data [ swapper  ] = data [ swapper - 1];
            data [ swapper - 1] = temp;
    }
    }
    //for( data_ind = 0; data_ind < data_size ;data_ind +=1)
      //  printf("%d ", data[ data_ind]);
    return EXIT_SUCCESS;
}
