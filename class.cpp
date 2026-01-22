#include <iostream>
#include <string>

using namespace std;

class car{
public:
    string brand;
    string model;
    float milage;
}c[3];

int main(){
    class car c1;
    c1.brand = "BMW";
    c1.model = "X3";
    c1.milage = 15.6;

    cout << "Brand: " << c1.brand << "\n";
    cout << "Model: " << c1.model << "\n";
    cout << "Milage: " << c1.milage << "\n";
    return 0;
}