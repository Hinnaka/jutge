#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a < c and b < c) cout << "[]" << endl;
    else if (c < a and d < a) cout << "[]" << endl;
    else if (a >= c) {
        if (b >= d) {
            cout << "[" << a << "," << d << "]" << endl;
        }
        else {
            cout << "[" << a << "," << b << "]" << endl;
        }
    }
    else
    {
        if (b >= d) {
            cout << "[" << c << "," << d << "]" << endl;
        }   
        else {
            cout << "[" << c << "," << b << "]" << endl;
        }
    }  
}
