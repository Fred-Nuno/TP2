#include <Pr4_Header.h>

#include <iostream>

void PascalTriangle(int sz) {
    int ary[sz][sz];

    for (int line = 0; line < sz; line++)
    {
        for (int i = 0; i <= line; i++)
        {
            if (line == i || i == 0)
                ary[line][i] = 1;
            else
                ary[line][i] = ary[line - 1][i - 1] +
                ary[line - 1][i];
            std::cout << ary[line][i] << "\t";
        }
        std::cout << std::endl;
    }
}

