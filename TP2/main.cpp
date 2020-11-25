#include <iostream>
#include "stdlib.h"

#include <Pr1_header.h>
#include <Pr2_Header.h>
#include <Pr3_Header.h>
#include <Pr4_Header.h>
#include <Pr5_Header.h>
#include <Pr6_Header.h>
#include <Pr7_Header.h>


int main()
{
    // ___________Problem 1 Calulator___________


//    std::cout<<"__Problem 1 Calulator__"<< std::endl;

//    char ch = 'y';
//    while (ch == 'y') {

//    ch = 'n';
//    int choice = 0;
//    double num_1 = 0;
//    double num_2 = 0;
//    double res = 0;

//    std::cout<<" \t MENU \n"
//               "\t1.  Add \n"
//               "\t2.  Substract \n"
//               "\t3.  Multiply \n"
//               "\t4.  Divide \n"
//               "\t5.  Modulus \n"<< std::endl;

//    std::cout<<"Choose the operation: \n";
//    std::cin>>choice;

//    std::cout<<"Enter your first number:" << std::endl;
//    std::cin>>num_1;
//    std::cout<<"Enter your second number:" << std::endl;
//    std::cin>>num_2;

//    switch(choice) {
//    case 1 :
//        Add(num_1,num_2, res);
//        break;
//    case 2 :
//        Substract(num_1,num_2, res);
//        break;
//    case 3 :
//        Multiply(num_1,num_2, res);
//        break;
//    case 4 :
//        Divide(num_1,num_2, res);
//        break;
//    case 5 :
//        Modulus(num_1,num_2, res);
//        break;
//    }

//    std::cout<<"Your Answer is : "<< res << std::endl;

//    std::cout<<"Do you want to continue? Type 'y' or 'n'" << std::endl;
//    std::cin>>ch;
//    }


    // ___________Problem 2 Integer Min Max___________


//    std::cout<<"__Problem 2 Integer Min Max__"<< std::endl;

//    int * Array;
//    int movArray[10];
//    Array = new int[10];

//    for(int i = 0; i < 10; i++){
//     std::cout<<"Enter the integer number "<<i+1<<" : "<< std::endl;
//     std::cin>>Array[i];
//     for (int n = 0; n < i; n++)
//     {
//         if (Array[i] == Array[n])
//         {
//             movArray[n]++;
//             break;
//         }
//     }
//    }

//    Min_Max_Occ(Array,movArray);

//    free (Array);

    // ___________Problem 3 Sorting___________


//    std::cout<<"__Problem 3 Sorting__"<< std::endl;

//    int * Array2 = 0;
//    srand(time(0));

//    std::cout<<"Unsorted Array"<< std::endl;
//    std::cout<< std::endl;

//    Array2 = new int[10];
//    for(int i = 0; i < 10; i++){
//        Array2[i] = rand()%100;
//        std::cout<<Array2[i]<<" ";
//    }
//    std::cout<< std::endl;
//    std::cout<<"Sorted Array"<< std::endl;
//    std::cout<< std::endl;

//    sortValues(Array2);

//    free (Array2);


    // ___________Problem 4 Pascal Triangle___________


//    std::cout<<"__Problem 4 Pascal Triangle__"<< std::endl;

//    int size;
//    std::cout << "Enter the size of your triangle : ";
//    std::cin>> size;
//    PascalTriangle(size);


    // ___________Problem 5 Pointer Max___________


//    std::cout<<"__Problem 5 Pointer Max__"<< std::endl;

//    int * Maximum = 0;
//    int size = 0;
//    int Array3[size];

//    std::cout<<"Enter the size of your Array: "<< std::endl;
//    std::cin>>size;
//    for(int i = 0; i < size; i++){
//      std::cout<<"Enter the value number "<<i+1<<" : "<< std::endl;
//      std::cin>>Array3[i];
//    }
//    Maximum = Max(Array3, size);

//    std::cout<<"The Maximum value in your Array is : "<< *Maximum << std::endl;

    // ___________Problem 6 Array Pointer____________

//    std::cout<<"__Problem 6 Array Pointer__"<< std::endl;

//    ArrayPointer();

    // ___________Problem 7 Sort Ascending___________

    std::cout<<"__Problem 7 Sort Ascending__"<< std::endl;

    int size = 10;
    int Array4[size];
    srand(time(0));

    std::cout<<"Unsorted Array"<< std::endl;
    std::cout<< std::endl;

    for(int i = 0; i < size; i++){
        Array4[i] = rand()%100;
        std::cout<<Array4[i]<<"\t";
    }
    std::cout<< std::endl;
    std::cout<<"Sorted Array"<< std::endl;
    std::cout<< std::endl;

    int *SortedArray2 = SortAscend(Array4, size);

    for(int i=0; i<size;i++)
        std::cout << *SortedArray2++ << "\t";
    std::cout<< std::endl;

    return 0;
}
