#include <iostream>
#include "zero_error.h"



int main()
{
    int k;
    int l = 9;
    int m[] =  {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout<<"Input number: ";
    std::cin>>k;
    if (k < l){
        zero_error(m, k);

    }
    else{
        if(k!=9){
            int j = m[k];
            std::cout<<j;
        }
        else{
            while(true) new int;
        }
    }
    return 0;
}