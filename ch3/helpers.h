//
// Created by Jose Antonio Lorenzo Lopez on 23/11/23.
//

#ifndef HELPERS_H
#define HELPERS_H

#include <string>
#include <sstream>
struct linea {
    int min;
    int max;
    char ch;
    std::string code;
};
namespace helpers {
    using std::string, std::vector, std::stoi;

    void make_struct(string &x, std::vector<struct linea> &al) {
        struct linea line;

        //assuming that will always be the same format so i wont get a npos here
        int dashPos = x.find('-');
        int spacePos = x.find(' ');
        int colonPos = x.find(':');

        line.min = stoi(x.substr(0, dashPos));
        line.max = stoi(x.substr(dashPos + 1, spacePos - dashPos - 1));
        line.ch = x[spacePos + 1];
        line.code = x.substr(colonPos + 2);
        al.push_back(line);
    }

    int count_char(char ch,string str) {
        int count=0;
        for (char r : str) {
            if(r==ch) {
                count++;
            }
        }
        return count;
    }

    string check_valid(vector<struct linea> all_lines) {
        int count=0;
        string err[42];
        for(auto &x : all_lines) {
            if(count==42){break;}
            int cnt=count_char(x.ch,x.code);
            if(cnt<x.min || cnt>x.max) {
                err[count]=x.code;
                count++;
            }
        }
        if (count>=42) {
            return err[41];
        }else {
            return "";
        }
    }
}
#endif //HELPERS_H
