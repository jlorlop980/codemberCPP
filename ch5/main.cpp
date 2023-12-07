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

    std::cout<<names;
    /*
    elemento persona{
        per[0],per[1],per[2],per[3],per[4]
    };
    */
    return 0;
}
