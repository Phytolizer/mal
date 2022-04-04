#pragma once

extern "C" {
#include <stdio.h>
// dependency for readline to even be included

#include <readline/history.h>
#include <readline/readline.h>
}

#include <string>

class read_line {
  public:
    read_line() {
        rl_bind_key('\t', rl_complete);
    }

    bool read(std::string& line) {
        char* raw_line = readline("mal> ");
        if (raw_line == nullptr) {
            return false;
        }
        add_history(raw_line);
        line.assign(raw_line);
        free(raw_line);
        return true;
    }
};
