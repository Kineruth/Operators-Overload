#include <iostream>
using namespace std;

class CircularInt{
    private:
        int start, end, number, range;
        
        CircularInt(const CircularInt& clone);
        
        /* make this->number in the range */
        void normalize();
        
    public:
        CircularInt(int x, int y);
        
        int getNumber();
        CircularInt& operator= (int n);
        CircularInt operator+ (const int n) const; // hour + int
        CircularInt operator+ (const CircularInt& ci) const; // hour + hour
        CircularInt operator- (const int n) const; // hour - int
        CircularInt operator* (const int n) const; // hour * int
        CircularInt operator/ (const int n) const; // hour / int
        CircularInt operator% (const int n) const; // hour % int
        CircularInt& operator+= (const int n); // hour += int
        CircularInt& operator-= (const int n); // hour -= int
        CircularInt& operator*= (const int n); // hour *= int
        CircularInt& operator/= (const int n); // hour /= int
        CircularInt& operator%= (const int n); // hour %= int
        CircularInt& operator++ (); //prefix ++ -> ++(a)
        CircularInt& operator-- (); //prefix -- -> --(a)
        const CircularInt operator++ (int flag_for_postfix_increment); //postfix ++ -> (a)++
        const CircularInt operator-- (int flag_for_postfix_increment); //postfix -- -> (a)--
        const CircularInt operator- () const; // -hour
        friend CircularInt operator+ (int n, const CircularInt& ci); // int + hour
        friend CircularInt operator- (int n, const CircularInt& ci); // int - hour
        friend CircularInt operator* (int n, const CircularInt& ci); // int * hour
        friend CircularInt operator/ (int n, const CircularInt& ci); // int / hour
        friend CircularInt operator% (int n, const CircularInt& ci); // int % hour
        friend ostream& operator<< (ostream& os, const CircularInt& ci);
        //friend istream& operator>> (istream& is, Complex& c);
        
};