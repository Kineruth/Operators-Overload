#include "CircularInt.hpp"
#include <iostream>
using namespace std;

int main(){
    int x =-10, y=10;
    CircularInt ci (x,y);
    int res = ci+50;
    cout << res << endl;
    return 0;
}