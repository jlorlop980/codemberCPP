#include <iostream>
#include "helpers.h"

int main()
{
    // Read the string from standard input
    std::string chall;
    std::getline(std::cin, chall);

    // Transform the string to lowercase
    std::transform(chall.begin(), chall.end(), chall.begin(), ::tolower);

    // Make vector to track the count of the words
    std::vector<std::pair<std::string, int>> prueba = makeVector(chall);

    // Join the words into the solution string
    std::cout << join(prueba);

    return 0;
}
