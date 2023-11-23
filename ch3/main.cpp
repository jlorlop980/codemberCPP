#include <iostream>
#include <vector>
#include "helpers.h"

int main(){
    std::string linea;
    std::vector<struct linea> all;

    while (std::getline(std::cin, linea)) {
        helpers::make_struct(linea, all);
    }

    std::cout<<"invalid code number 42-> "<<helpers::check_valid(all)<<std::endl;

    return 0;
}
