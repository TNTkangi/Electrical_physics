#include <iostream>
#include <math.h>
using namespace std;

class Eta {
    public :
        void show_data() {
            double n[3];
                cout << "Input a1: ";
                cin >> n[0];
                cout << "Input N: ";
                cin >> n[1];
                cout << "Input d: ";
                cin >> n[2];
                cout << "Ans: " << (n[1] / 2) * ((2 * n[0]) + (n[1] - 1) * n[2]) << endl;
                cout << "End Program" << endl;
        }
};

int main() {
    Eta Et1;
    Et1.show_data();
}