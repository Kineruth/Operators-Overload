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

/* make 'number' variable in the range */
void CircularInt::normalize(){
    if(number >= start && number <= end)
        return;
    
    while(number > end )
        number -= range;
    while(number < start )
        number += range;
}

int CircularInt::getNumber(){
    return this->number;
}


CircularInt& CircularInt::operator= (int n){
    number = n;
    normalize();
    return *this;
}

CircularInt CircularInt::operator+ (int n) {
    CircularInt tmp(*this);
    tmp.number += n;
    tmp.normalize();
    return tmp;
}

