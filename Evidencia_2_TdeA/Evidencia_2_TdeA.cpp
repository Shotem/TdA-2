
#include <iostream>
#include <vector>
#include <string>

#include "GIC.h"

int main()
{
    GIC g1 = GIC("014678", "vicente", "gr");
    std::cout << (g1.compare("014678grgrgr014678rgrgrgrgrgrgvicentevicente")? "True":"False") << std::endl;

    std::cin.get();
    
}

