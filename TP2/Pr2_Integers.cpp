#include <Pr2_Header.h>
#include <iostream>

void Min_Max_Occ(int *Array, int movArray[]){

    int min = Array[0];
    int max = Array[0];
    int mov_max = movArray[0];
    int mov_index = 0;


    for(int i = 0; i < 10; i++){
        if(Array[i] < min){
            min = Array[i];
        }
        if(Array[i] > max){
            max = Array[i];
        }

        if (movArray[i] > mov_max)
        {
            mov_index = i;
            mov_max = movArray[i];
        }
    }

    if (mov_max == 0)
        {
            std::cout << "All values occur once" << std::endl;
            std::cout << "Smallest of the values : " << min << "Greatest of the values : "
                      << max << std::endl;
        }

        else
            std::cout << "Smallest of the values : " << min << std::endl;
            std::cout << "Greatest of the values : " << max << std::endl;
            std::cout <<"Most occured value is : " << Array[mov_index] <<std::endl;
}


