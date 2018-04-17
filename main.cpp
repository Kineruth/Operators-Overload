#include "CircularInt.hpp"
#include <iostream>
using namespace std;

int main(){
    int x =1, y=12;
    CircularInt ci (x,y);
    CircularInt ci1 (x+9,y);
    
    ci1 = 5;
    cout << ci1.getNumber() << endl;
    // ci = ci+18;
    // cout << ci.getNumber() << endl;
    return 0;
}