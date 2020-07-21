#pragma once

#include <string>
#include <iostream>
#include <sstream>

namespace yummydirt {

    std::string reverseString(std::string s) {
        std::string reversed{""};
        for (int i{static_cast<int>(s.length()) - 1}; i > -1; i--) {
            reversed.append(1, s[i]);
        }
        return reversed;
    }

    std::string numToWord(int number) {
        std::ostringstream os;
        os << number;
        std::string numWord{os.str()};
        std::string word{""};
        int numLength{static_cast<int>(numWord.length())};
        for (int i{0}; i <= numLength; i++) {
            switch (numWord[i]) {
                
            }
        }
        std::cout << numWord << '\n' << numLength << '\n';
        return "";
    }

}