

#include <iostream>
#include "../028_library/potenciatest.h"

int main()
{
    double a = 7.4;
    int b = 99;

    std::cout << "a + b = " <<
        matespace::Arithmetic::sumayo(a, b) << std::endl;
    std::cout << "a - b = " <<
        matespace::Arithmetic::restayo(a, b) << std::endl;
    std::cout << "a * b = " <<
        matespace::Arithmetic::multiyo(a, b) << std::endl;
    std::cout << "a / b = " <<
        matespace::Arithmetic::diviyo(a, b) << std::endl;

    return 0;
}