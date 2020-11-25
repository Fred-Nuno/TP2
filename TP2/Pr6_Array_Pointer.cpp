#include <Pr6_Header.h>
#include <iostream>

void ArrayPointer() {
    int Array[5];
    int *ptr = Array;

    for(int i = 0; i < 5; i++){
        std::cout<<"Enter the integer number "<<i+1<<" : "<< std::endl;
        std::cin>> *ptr++;
    }

    std::cout<<"The numbers You Entered are : "<< std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << Array[i] << "\t";
    }
}
