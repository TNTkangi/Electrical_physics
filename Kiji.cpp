#include <iostream>
#include <math.h>
using namespace std;

class Kiji {
    public:
        void control() {
         double E = 1.60e-19;
         double  N[5];
            cout << "Input electron count: ";
            cin >> N[0];
            cout << "\n_______________________________\n";
            cout << "q: " << N[0] * E << endl;

    }
};

int main () {
    Kiji Ki1;
    Ki1.control();
       return 0;
}