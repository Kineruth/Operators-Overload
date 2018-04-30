#include <iostream>
using namespace std;

class CircularInt{
    private:
        int start, end, number, range;
        
        CircularInt(const CircularInt& clone);
        
        /* make this->number in the range */
        void normalize();
        // int normalize(long n);
        int normalize(int n);
        
    public:
        CircularInt(int x, int y);
        
        CircularInt& operator= (int n);
        CircularInt operator+ (const CircularInt& ci) const; // ci + ci
        CircularInt operator- (const CircularInt& ci) const; // ci - ci
        CircularInt operator* (const CircularInt& ci) const; // ci * ci
        CircularInt operator/ (const CircularInt& ci) ; // ci / ci
        CircularInt operator% (const CircularInt& ci) const; // ci % ci
        CircularInt operator^ (const CircularInt& ci) const; // ci ^ ci
        CircularInt operator& (const CircularInt& ci) const; // ci & ci
        CircularInt operator| (const CircularInt& ci) const; // ci | ci
        CircularInt operator<< (const CircularInt& ci) const; // ci << ci
        CircularInt operator>> (const CircularInt& ci) const; // ci >> ci
        CircularInt operator+ (const int n) const; // ci + int
        CircularInt operator- (const int n) const; // ci - int
        CircularInt operator* (const int n) const; // ci * int
        CircularInt operator/ (const int n) ; // ci / int
        CircularInt operator% (const int n) const; // ci % int
        CircularInt operator^ (const int n) const; // ci ^ int
        CircularInt operator& (const int n) const; // ci & int
        CircularInt operator| (const int n) const; // ci | int
        CircularInt operator<< (const int n) const; // ci << int
        CircularInt operator>>(const int n) const; // ci >> int
        CircularInt& operator+= (const CircularInt& ci); // ci += ci
        CircularInt& operator-= (const CircularInt& ci); // ci -= ci
        CircularInt& operator*= (const CircularInt& ci); // ci *= ci
        CircularInt& operator/= (const CircularInt& ci); // ci /= ci
        CircularInt& operator%= (const CircularInt& ci); // ci %= ci
        CircularInt& operator^= (const CircularInt& ci); // ci ^= ci
        CircularInt& operator&= (const CircularInt& ci); // ci &= ci
        CircularInt& operator|= (const CircularInt& ci); // ci |= ci
        CircularInt& operator<<= (const CircularInt& ci); // ci <<= ci
        CircularInt& operator>>= (const CircularInt& ci); // ci >>= ci
        CircularInt& operator+= (const int n); // ci += int
        CircularInt& operator-= (const int n); // ci -= int
        CircularInt& operator*= (const int n); // ci *= int
        CircularInt& operator/= (const int n); // ci /= int
        CircularInt& operator%= (const int n); // ci %= int
        CircularInt& operator^= (const int n); // ci ^= int
        CircularInt& operator&= (const int n); // ci &= int
        CircularInt& operator|= (const int n); // ci |= int
        CircularInt& operator<<= (const int n); // ci <<= int
        CircularInt& operator>>= (const int n); // ci >>= int
        CircularInt& operator++ (); //prefix ++ -> ++(a)
        CircularInt& operator-- (); //prefix -- -> --(a)
        const CircularInt operator++ (int flag_for_postfix_increment); //postfix ++ -> (a)++
        const CircularInt operator-- (int flag_for_postfix_increment); //postfix -- -> (a)--
        const CircularInt operator- () const; // -ci
        const CircularInt operator~ () const; // ~ci
        friend CircularInt operator+ (int n, const CircularInt& ci); // int + ci
        friend CircularInt operator- (int n, const CircularInt& ci); // int - ci
        friend CircularInt operator* (int n, const CircularInt& ci); // int * ci
        friend CircularInt operator/ (int n, CircularInt& ci); // int / ci
        friend CircularInt operator% (int n, const CircularInt& ci); // int % ci
        friend CircularInt operator^ (int n, const CircularInt& ci); // int ^ ci
        friend CircularInt operator& (int n, const CircularInt& ci); // int & ci
        friend CircularInt operator| (int n, const CircularInt& ci); // int | ci
        friend CircularInt operator<< (int n, const CircularInt& ci); // int << ci
        friend CircularInt operator>> (int n, const CircularInt& ci); // int >> ci
        const bool operator==(const CircularInt& ci) const;
        const bool operator!=(const CircularInt& ci) const;
        const bool operator<(const CircularInt& ci) const;
        const bool operator<=(const CircularInt& ci) const;
        const bool operator>(const CircularInt& ci) const;
        const bool operator>=(const CircularInt& ci) const;
        const bool operator==(const int n) const;
        const bool operator!=(const int n) const;
        const bool operator<(const int n) const;
        const bool operator<=(const int n) const;
        const bool operator>(const int n) const;
        const bool operator>=(const int n) const;
        friend const bool operator==(const int n, const CircularInt& ci);
        friend const bool operator!=(const int n, const CircularInt& ci);
        friend const bool operator<(const int n, const CircularInt& ci);
        friend const bool operator<=(const int n, const CircularInt& ci);
        friend const bool operator>(const int n, const CircularInt& ci);
        friend const bool operator>=(const int n, const CircularInt& ci);
        friend ostream& operator<< (ostream& os, const CircularInt& ci);
        friend istream& operator>> (istream& is, CircularInt& ci);
        
};