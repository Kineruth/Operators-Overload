#include "CircularInt.hpp"

CircularInt::CircularInt(int x, int y) : start(x), end(y) {
    if(x>y){
        start = y;
        end = x;
    }
    number = start;
}

CircularInt::CircularInt(CircularInt& clone){
    this(clone.start, clone.end);
    this->number = clone.number;
}

// int CircularInt::operator+ (int n) const{
//     CircularInt tmp(*this);
    
//     if(end-tmp.number <= n){
//      n -= (end-tmp.number);
//      tmp.number = start;
//      return tmp+n;
//     }
    
//     tmp.number += n;
//     return tmp.number;
// }

