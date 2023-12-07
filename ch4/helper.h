//
// Created by Jose Antonio Lorenzo Lopez on 7/12/23.
//

#ifndef HELPER_H
#define HELPER_H

#include <vector>
#include <string>
#include <set>

namespace helper {
    using std::vector, std::string, std::set;

    vector<string> split(string st) {
        vector<string> res;
        string wnd = "";
        for (const char x : st) {
            if (x != '-') {
                wnd += x;
            } else {
                if (!wnd.empty()) {
                    res.push_back(wnd);
                    wnd = "";
                }
            }
        }

        // add the last word
        if (!wnd.empty()) {
            res.push_back(wnd);
        }
        return res;
    }

    string set_maker(string a) {
        bool flag=false;
        string res="";
        for(int i=0;i<a.size();i++) {
            for(int j=0;j<a.size();j++) {
                if((a[i]==a[j])&& i!=j ){ flag=true;break; }
            }

            if(!flag){res+=(a[i]);}
            flag=false;
        }
        return res;
    }

    int cheksum_checker(vector<string> a, vector<vector<string>> &corrects) {

        string uniques=set_maker(a[0]);

        if(uniques!=a[1]) { return 0; }

        corrects.push_back(a);
        return 1;
    }
}
#endif //HELPER_H
