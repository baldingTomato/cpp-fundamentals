#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    if(command == "add"){
        std::string result = std::to_string(first + second);
        return result;
    }

    return "";
}
