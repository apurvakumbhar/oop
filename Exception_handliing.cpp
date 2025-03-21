#include<iostream>
using namespace std;

int main() {
    float n, d, r;
    cout << "Enter value of numerator: ";
    cin >> n;
    cout << "Enter value of denominator: ";
    cin >> d;
    
    try {
        if (d == 0) {
            throw "Denominator cannot be 0.";  
        }
        r = n / d;  
        cout << "Division is: " << r << endl;
    }
    
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;  
    }
    
    return 0;
}
