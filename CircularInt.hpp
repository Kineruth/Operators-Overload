
class CircularInt{
    private:
        int start, end, number;
        CircularInt(CircularInt& clone);
    public:
        CircularInt(int x, int y): start(x), end(y){}
        
        int operator+(int n) const{
            CircularInt tmp(this);
            
            if(end-tmp.number <= n){
             n -= (end-tmp.number);
             tmp.number = start;
             return tmp+n;
            }
            
            tmp.number += n;
            return tmp.number;
        }
        
        
};