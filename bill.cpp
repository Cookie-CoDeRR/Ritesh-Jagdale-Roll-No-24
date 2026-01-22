#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Username;
    int billnumber;
    string particulars;
    float amount;
    float gst;
    float finalbill;
    cout << "Enter the Username : ";
    cin >> Username ;
    cout << "Enter the Billnumber : ";
    cin >> billnumber;
    cout << "Enter the Particulars : ";
    cin >> particulars;
    cout << "Enter amount : ";
    cin >> amount;

    gst = (amount * 0.18)/100 ;
    finalbill = amount + gst;

    cout << "-----------Bill-------------";
    cout << "Username = ";
    cout << Username << "\n";
    cout << "Bill No = ";
    cout << billnumber << "\n";
    cout << "Particulars = ";
    cout << particulars << "\n";
    cout << "Amount = ";
    cout << amount << "\n";
    cout << "GST = ";
    cout << gst << "\n";
    cout << "FinalBill = ";
    cout << finalbill;
    return 0;
}