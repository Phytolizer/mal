#include <iostream>
#include <string>

int main() {
    std::string line_buffer;
    while (true) {
        std::cout << "mal> " << std::flush;
        if (!std::getline(std::cin, line_buffer)) {
            break;
        }

        std::cout << line_buffer << '\n';
    }
}
