//
// Created by Jose Antonio Lorenzo Lopez on 7/12/23.
//

#ifndef HELPERS_H
#define HELPERS_H

#include <string>
#include <vector>
#include <cctype>
#include <regex>

namespace helper {
    using std::vector, std::string;

    vector<string> split(string st,char separator) {
        vector<string> res;
        string wnd = "";
        for (const char x : st) {
            if (x != separator) {
                wnd += x;
            } else {
                if (!wnd.empty()) {
                    res.push_back(wnd);
                    wnd = "";
                }
                else {
                    res.emplace_back(" ");
                }
            }
        }

        // add the last word
        if (!wnd.empty()) {
            res.push_back(wnd);
        }
        return res;
    }


    int checker(vector<string> per) {
        std::regex patron("\\w+@\\w+\\.com");

        if (per.size()!=5){ return 0; }
        //check the id
        for(auto x:per[0]) {
            if(!std::isalnum(x)){ return 0; }
        }
        //check the mail
        if (!std::regex_match(per[2], patron)){ return 0; }

        //check the user
        for(auto x:per[1]) {
            if(!std::isalnum(x)){ return 0; }
        }

        return 1;
    }
}
#endif //HELPERS_H
