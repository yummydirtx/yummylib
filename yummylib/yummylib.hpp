#pragma once

#include <string>
#include <iostream>

namespace yummydirt {

    std::string reverseString(std::string s) {
        std::string reversed{""};
        for (int i{static_cast<int>(s.length()) - 1}; i > -1; i--) {
            reversed.append(1, s[i]);
        }
        return reversed;
    }

}