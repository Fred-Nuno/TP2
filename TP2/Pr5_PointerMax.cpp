#include <Pr5_Header.h>

int * Max(int Array[],const int Arr_Size){

    int *max = Array;
    for(int i = 0; i < Arr_Size; i++){
        if(Array[i] > *max){
            *max = Array[i];
        }
    }
    return max;
}
