#include <iostream>
#include "helper.h"

int main() {
    std::string linea;
    std::vector<std::vector<std::string>> splitted;
    std::vector<std::vector<std::string>> corrects;

    while (std::getline(std::cin, linea)) {
        splitted.push_back( helper::split(linea));
    }

    for(auto x:splitted) {
        helper::cheksum_checker(x,corrects);
    }

    if(corrects.size()>=32) {
        std::cout<<corrects[32][1]<<std::endl;
    }
    return 0;
}
