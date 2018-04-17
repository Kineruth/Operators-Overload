
class CircularInt{
    private:
        int start, end, number, range;
        CircularInt(const CircularInt& clone);
        
    public:
        CircularInt(const int x, const int y);
        
        int getNumber();
        CircularInt& operator= (int n);
        CircularInt operator+ (int n);
        
        
};