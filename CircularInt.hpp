#include <iostream>
using namespace std;

class CircularInt{
    private:
        int start, end, number, range;
        
        CircularInt(const CircularInt& clone);
        
        /* make this->number in the range */
        void normalize();
        
    public:
        CircularInt(const int x, const int y);
        
        int getNumber();
        CircularInt& operator= (const int n);
        CircularInt operator+ (const int n) const;
        CircularInt& operator+= (const int n);
        const CircularInt operator++  (int flag_for_postfix_increment);
        friend ostream& operator<< (ostream& os, const CircularInt& ci);
        //friend istream& operator>> (istream& is, Complex& c);
        
        
};