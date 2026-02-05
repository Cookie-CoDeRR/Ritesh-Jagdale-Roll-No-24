#include <iostream>
#include <string>
using namespace std;

class patient
{
    private:
        string name;
        int age;
        int date;
        int billing;
    public:
        patient() : name(""), age(0), date(0), billing(0) { }

        patient(string pname, int page, int pdate, int pbilling)   
            : name(pname), age(page), date(pdate), billing(pbilling) { } 
       
        void print(){
            cout << "patient name :"<<name<<"\n";
            cout << "patient age :"<<age<<"\n";
            cout << "patient date :"<<date<<"\n";
            cout << "patient billing :"<<billing<<"\n";
        }

    };

int main(){
    patient p1("Ritesh", 21, 12, 5000);
    p1.print();
    cout << "Patient record created successfully." << endl;
    return 0;
}