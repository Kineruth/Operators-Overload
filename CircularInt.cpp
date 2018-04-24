#include "CircularInt.hpp"

CircularInt::CircularInt(int x, int y) : start(x), end(y) {
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

int CircularInt::normalize(long n){
    if(n >= start && n <= end)
        return (int)n;
    
    while(n > end )
        n -= range;
    while(n < start )
        n += range;
    
    return (int)n;
}

CircularInt& CircularInt::operator= (int n){
    number = n;
    normalize();
    return *this;
}

CircularInt CircularInt::operator+ (const CircularInt& ci) const{
   CircularInt tmp(*this);
   tmp.number += ci.number;
   tmp.normalize();
   return tmp;
}

CircularInt CircularInt::operator- (const CircularInt& ci) const{ // ci - ci
    CircularInt tmp(*this);
    tmp.number -= ci.number;
    tmp.normalize();
    return tmp;
}

CircularInt CircularInt::operator* (const CircularInt& ci) const{ // ci * ci
    CircularInt tmp(*this);
    tmp.number *= ci.number;
    tmp.normalize();
    return tmp;
}

CircularInt CircularInt::operator/ (const CircularInt& ci) const{ // ci / ci
    int i;
    for(i = start ;i<end; i++){
        long l = i * ci.number;
        int res = normalize(l);
        if(res == number){
            CircularInt tmp(*this);
            tmp.number = i;
            return tmp;
        }
    }
    throw string("There is no Integer x in the range such that x*"+to_string(ci.number) + "="+to_string(number);
}

CircularInt CircularInt::operator% (const CircularInt& ci) const{ // ci % ci
    CircularInt tmp(*this);
    tmp.number %= ci.number;
    tmp.normalize();
    return tmp;
}

CircularInt CircularInt::operator^ (const CircularInt& ci) const{
    CircularInt tmp(*this);
    tmp.number ^= ci.number;
    tmp.normalize();
    return tmp;
}

CircularInt CircularInt::operator+ (int n) const{
    CircularInt tmp(*this);
    tmp.number += n;
    tmp.normalize();
    return tmp;
}


/* CircularInt - number
   Example: (CircularInt hour)1 - (int)13 = (CircularInt)12 */
CircularInt CircularInt::operator- (int n) const{
    CircularInt tmp(*this);
    tmp.number -= n;
    tmp.normalize();
    return tmp;
}

CircularInt CircularInt::operator* (int n) const{
    CircularInt tmp(*this);
    tmp.number *= n;
    tmp.normalize();
    return tmp;
}

CircularInt CircularInt::operator/ (const int n) const{
    int i;
    for(i = start; i<end; i++){
        long l = i*n;
        int res = normalize(l);
        if(res == number){
            CircularInt tmp(*this);
            tmp.number = i;
            return tmp;
        }
    }
    throw string("There is no Integer x in the range such that x*"+to_string(n) + "="+to_string(number);
}

CircularInt CircularInt::operator% (const int n) const{
    CircularInt tmp(*this);
    tmp.number %= n;
    tmp.normalize();
    return tmp;
}

CircularInt CircularInt::operator^ (const int n) const{ // ci ^ int
    CircularInt tmp(*this);
    tmp.number ^= n;
    tmp.normalize();
    return tmp;
}

CircularInt& CircularInt::operator+= (const int n){
    number += n;
    normalize();
    return *this;
}

CircularInt& CircularInt::operator-= (const int n){
    number -= n;
    normalize();
    return *this;
}

CircularInt& CircularInt::operator*= (const int n){
    number *= n;
    normalize();
    return *this;
}

CircularInt& CircularInt::operator/= (const int n){
    *this = *this / n;
    return *this;
}

CircularInt& CircularInt::operator%= (const int n){
    number %= n;
    normalize();
    return *this;
}

CircularInt& CircularInt::operator^= (const int n){ // ci ^= int
    number ^= n;
    normalize();
    return *this;
}

/* prefix ++ -> ++(a) */
CircularInt& CircularInt::operator++ (){
    (this->number)++;
    normalize();
    return *this;
}

/* prefix -- -> --(a) */
CircularInt& CircularInt::operator-- (){
    (this->number)--;
    normalize();
    return *this;
}

const CircularInt CircularInt::operator++ (int flag_for_postfix_increment){
    CircularInt tmp(*this); 
    ++(this->number);
    this->normalize();
    return tmp; //returns the copy
    
}

const CircularInt CircularInt::operator-- (int flag_for_postfix_discrement){
    CircularInt tmp(*this); 
    --(this->number);
    this->normalize();
    return tmp; //returns the copy
    
}

const CircularInt CircularInt::operator- () const{
    CircularInt tmp(*this);
    tmp.number = tmp.end - tmp.number;
    tmp.normalize();
    return tmp;
}

CircularInt CircularInt::operator+ (int n, const CircularInt& ci){
    return ci+n;
}

CircularInt CircularInt::operator- (int n, const CircularInt& ci){
    CircularInt tmp(ci);
    tmp.number = n - tmp.number;
    tmp.normalize();
    return tmp;
}

// int * hour
CircularInt CircularInt::operator* (int n, const CircularInt& ci){
    return ci*n;
} 

// int / hour
CircularInt CircularInt::operator/ (int n, const CircularInt& ci){
    int i;
    for(i = ci.start; i<ci.end; i++){
        long l = i*ci.number;
        int res = normalize(l);
        if(res == n){
            CircularInt tmp(ci);
            tmp.number = i;
            return tmp;
        }
    }
    throw string("There is no Integer x in the range such that x*"+to_string(ci.number) + "="+to_string(n));
} 


CircularInt CircularInt::operator% (int n, const CircularInt& ci){ // int % ci
    CircularInt tmp(ci);
    tmp.number = n % tmp.number;
    tmp.normalize();
    return tmp;
} 

CircularInt CircularInt::operator^ (int n, const CircularInt& ci){ // int ^ ci
    CircularInt tmp(ci);
    tmp.number = n ^ tmp.number;
    tmp.normalize();
    return tmp;
}

int CircularInt::operator+ (int n, const CircularInt& ci){
    return n + ci.number;
}

int CircularInt::operator- (int n, const CircularInt& ci){
    return = n - ci.number;
}

int CircularInt::operator* (int n, const CircularInt& ci){ // int * hour
    return n * ci.number;
} 

int CircularInt::operator/ (int n, const CircularInt& ci){ // int / hour
    return n/ci.number;
} 

int CircularInt::operator% (int n, const CircularInt& ci){ // int % hour
    return n % ci.number;
}

int CircularInt::operator^ (int n, const CircularInt& ci){ // int ^ ci
    return n ^ ci.number;
}

const bool CircularInt::operator==(const CircularInt& ci) const{
    return number == ci.number;
}

const bool CircularInt::operator!=(const CircularInt& ci) const{
    return number != ci.number;
}

const bool CircularInt::operator<(const CircularInt& ci) const{
    return number < ci.number;
}

const bool CircularInt::operator<=(const CircularInt& ci) const{
    return number <= ci.number;
}

const bool CircularInt::operator>(const CircularInt& ci) const{
    return number > ci.number;
}

const bool CircularInt::operator>=(const CircularInt& ci) const{
    return number >= ci.number;
}

ostream& operator<< (ostream& os, const CircularInt& ci){
    return os << ci.number;
}

