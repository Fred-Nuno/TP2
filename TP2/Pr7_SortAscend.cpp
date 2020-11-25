#include <Pr7_Header.h>

int * SortAscend(int* values, int size) {

    int * x = values;
    int * y = values + 1;
    int temp;

    for(int i = 0; i <= size; i++)
    {
        for(int q=i+1; q < size; q++)
        {
            if(*values > *y)
            {
                temp  = *values;
                *values = *y;
                *y =temp;
            }
            values++;
            y++;
        }
        values = x;
        y = x + 1;
    }

    return values;
}
