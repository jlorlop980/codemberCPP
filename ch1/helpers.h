#ifndef HELPERS_H
#define HELPERS_H

#include <string>
#include <vector>
#include <utility>
// Split of the words
std::vector<std::string> split(std::string st) {
    std::vector<std::string> res;
    std::string wnd = "";
    for (const char x : st) {
        if (x != ' ') {
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

// Making the vector to track the count of the words
std::vector<std::pair<std::string, int>> makeVector(std::string str) {
    std::vector<std::string> vec = split(str);
    std::vector<std::pair<std::string, int>> res;

    for (const std::string &x : vec) {
        bool found = false;

        for (auto &pair : res) {
            if (pair.first == x) {
                pair.second++;
                found = true;
                break;
            }
        }

        if (!found) {
            res.emplace_back(x, 1);
        }
    }
    return res;
}

// Joining the words into the solution string
std::string join(const std::vector<std::pair<std::string, int>> &vec) {
    std::string sol = "";
    for (const auto &x : vec) {
        sol += x.first + std::to_string(x.second);
    }
    return sol;
}

#endif // HELPERS_H