#ifndef UTILS_H
#define UTILS_H

#include <ctime>

int RandomIntInRnage(int start, int end) {
        
        return std::rand() % end + start;
}

#endif