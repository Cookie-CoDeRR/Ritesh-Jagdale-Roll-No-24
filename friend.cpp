#include <iostream>
using namespace std;

class box
{
    private:
        int length;
    public:
    box():length(0) {  }
    friend int printlength(box b);
};

int printlength(box b)
{
    b.length+= 10;
    return b.length;
}

int main()
{
    box b;
    cout << "Length of box : " << printlength(b) << endl;
    return 0;
}