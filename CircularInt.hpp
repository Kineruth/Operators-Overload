
class CircularInt{
    private:
        int start, end, number;
        CircularInt(const CircularInt& clone);
    public:
        CircularInt(int x, int y): start(x), end(y){}
        
        int operator+(int n){
            CircularInt tmp(start, end);
            tmp.number = number;
            
            if(end-tmp.number <= n){
             n -= (end-tmp.number);
             tmp.number = start;
             return tmp+n;
            }
            
            tmp.number += n;
            return tmp.number;
        }
        
        
};