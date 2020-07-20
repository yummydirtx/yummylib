#pragma once

#include <string>
#include <iostream>

namespace yummydirt {

    std::string reverseString(std::string s) {
        for (long unsigned int i{s.length() - 1}; i > -1; i--) {
            std::cout << s[i];
        }
        return s;
    }

}