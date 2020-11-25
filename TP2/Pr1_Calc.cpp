#include <iostream>

#include <Pr1_header.h>


void Add(double &num_1, double &num_2, double &res) {
    res = num_1 + num_2;
}

void Substract(double &num_1, double &num_2, double &res) {
    res = num_1 - num_2;
}

void Multiply(double &num_1, double &num_2, double &res) {
    res = num_1 * num_2;
}

void Divide(double &num_1, double &num_2, double &res) {
    if (num_2 != 0) res = num_1 / num_2;
    else {std::cout<<"You can not divide by Zero!!" << std::endl;}
}

void Modulus(double &num_1, double &num_2, double &res) {
    res = (int)num_1 % (int)num_2;
}




