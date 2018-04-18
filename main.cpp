#include "CircularInt.hpp"
#include <iostream>
using namespace std;

int main(){
    int x =1, y=12;
    CircularInt ci (1,12);
    CircularInt ci1 (10,12);
    
    ci1 = 5;
    cout << ci1.getNumber() << endl; //11
    ci = ci+18;
    cout << ci.getNumber() << endl; //7
    return 0;
}