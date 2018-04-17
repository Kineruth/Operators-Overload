#include "CircularInt.hpp"

CircularInt::CircularInt(const int x, const int y) : start(x), end(y) {
    if(x>y){
        start = y;
        end = x;
    }
    number = start;
    range = end - start + 1;
}

CircularInt::CircularInt(const CircularInt& clone){
    start = clone.start;
    end = clone.end;
    number = clone.number;
    range = clone.range;
}

int CircularInt::getNumber(){
    return this->number;
}


CircularInt& CircularInt::operator= (int n){
    while(n > this->end ){
        n -= this->range;
    }
    while(n < this->start ){
        n += this->range;
    }
    this->number = n;
    return *this;
}

CircularInt CircularInt::operator+ (int n) {
    CircularInt tmp(*this);
    //tmp.number = number;
    
    tmp.number += n;


    return tmp;
}

