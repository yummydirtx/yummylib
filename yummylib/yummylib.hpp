/*
This was written by:
    _    _             _____           _   _    _       
   / \  | | _____  __ |  ___| __ _   _| |_| | _(_)_ __  
  / _ \ | |/ _ \ \/ / | |_ | '__| | | | __| |/ / | '_ \ 
 / ___ \| |  __/>  <  |  _|| |  | |_| | |_|   <| | | | |
/_/   \_\_|\___/_/\_\ |_|  |_|   \__,_|\__|_|\_\_|_| |_|
Not all of this was entirely written by me, but this was certainly put together by me.
Complete documentation is in the readme                              
*/
#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <sstream>

namespace yummydirt {
    // This reverses the string inputted and returns it
    std::string reverseString(std::string s) {
        std::string reversed{""};
        for (int i{static_cast<int>(s.length()) - 1}; i > -1; i--) {
            reversed.append(1, s[i]);
        }
        return reversed;
    }
    // This turns any number (under a trillion) to a phrase
    std::string numToWord(int number) {
        std::string digitName(int digit);
        std::string teenName(int number);
        std::string tensName(int number);
        std::string intName(int number);

        std::vector<std::string> ones {"","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        std::vector<std::string> teens {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen","sixteen", "seventeen", "eighteen", "nineteen"};
        std::vector<std::string> tens {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

        if (number < 10) {
            return ones[number];
        } else if (number < 20) {
            return teens [number - 10];
        } else if (number < 100) {
            return tens[number / 10] + ((number % 10 != 0) ? " " + numToWord(number % 10) : "");
        } else if (number < 1000) {
            return numToWord(number / 100) + " hundred" + ((number % 100 != 0) ? " " + numToWord(number % 100) : "");
        } else if (number < 1000000) {
            return numToWord(number / 1000) + " thousand" + ((number % 1000 != 0) ? " " + numToWord(number % 1000) : "");
        } else if (number < 1000000000) {
            return numToWord(number / 1000000) + " million" + ((number % 1000000 != 0) ? " " + numToWord(number % 1000000) : "");
        } else if (number < 1000000000000) {
            return numToWord(number / 1000000000) + " billion" + ((number % 1000000000 != 0) ? " " + numToWord(number % 1000000000) : "");
        }
        return "error";
    }

}