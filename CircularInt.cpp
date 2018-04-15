#include "CircularInt.hpp"
using namespace CircularInt;

CircularInt(int x, int y) : start(x), end(y) {
    if(x>y){
        start = y;
        end = x;
    }
    number = start;
}

CircularInt(CircularInt& clone){
    this(clone.start, clone.end);
    this->number = clone.number;
}

