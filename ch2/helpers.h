//
// Created by Jose Antonio Lorenzo Lopez on 21/11/23.
//

#ifndef HELPERS_H
#define HELPERS_H

#include <string>

namespace helpers {
    std::string compil(std::string &a) {
        int acc=0;
        std::string res="";
        for(const char &x : a) {
            switch(x) {
                case '@':
                    acc--;
                break;
                case '#':
                    acc++;
                break;
                case '*':
                    acc*=acc;
                break;
                case '&':
                    res+=std::to_string(acc);
                break;
            }
        }
        return res;
    }
}

#endif //HELPERS_H