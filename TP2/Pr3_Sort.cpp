#include <Pr3_Header.h>
#include <iostream>

void sortValues(int* val) {
     int mx = val[0];
     int mn = val[0];
     int v = 10, index = 0;
     int sortedValues[10] = { 0 };
     int p = -1;

     while (v--)
     {
         p++;
         for (int i = 0; i < 10; i++) {
             if (val[i] > mx)
             {
                 mx = val[i];
                 index = i;
             }
             if (p == 0)
             {
                if (val[i] < mn)
                    mn = val[i];
             }
         }
         val[index] = mn;
         sortedValues[p] = mx;
         mx = val[0];
         index = 0;
     }

     for (int i = 0; i < 10; i++)
         std::cout << sortedValues[i] << " ";
     std::cout<< std::endl;
}

