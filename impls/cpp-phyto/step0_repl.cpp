#include "readline.hpp"

#include <iostream>
#include <string>

int main() {
    std::string line_buffer;
    read_line rl;
    while (true) {
        if (!rl.read(line_buffer)) {
            break;
        }

        std::cout << line_buffer << '\n';
    }
}
