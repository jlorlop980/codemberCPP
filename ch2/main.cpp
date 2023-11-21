#include <iostream>
#include "helpers.h"

int main() {
    // Read the string from standard input
    std::string chall;
    std::getline(std::cin, chall);

    std::cout << helpers::compil(chall) << std::endl;
    return 0;
}


