#include <iostream>
#include "helpers.h"

int main() {

    std::string linea;
    std::vector<std::vector<std::string>> splitted;
    std::string names;

    while (std::getline(std::cin, linea)) {
        splitted.push_back( helper::split(linea,','));
    }

    for(auto x: splitted) {
        if(!helper::checker(x)) {
            names+=x[1][0];
        }
    }

    std::cout<<names<<std::endl;

    return 0;
}
