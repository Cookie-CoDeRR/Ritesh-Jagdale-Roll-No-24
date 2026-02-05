#include <iostream>
#include <math.h>
using namespace std;

inline int square(int a){
    return a*a;
}

inline int cube(int a){
    return a*a*a;
}

int main(){
    cout<<"square of no :"<<square(5)<<"\n";
    cout<<"cube of no :"<<cube(2);
    return 0;
}