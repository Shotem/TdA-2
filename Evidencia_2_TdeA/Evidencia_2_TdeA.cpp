
#include <iostream>
#include <vector>
#include <string>

#include "GIC.h"

int main()
{
    GIC g1 = GIC();


    std::cout << (g1.compare("iwwiwwwwjj")? "True":"False") << std::endl;

    std::cin.get();
    
}

