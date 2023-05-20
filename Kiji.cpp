#include <iostream>
#include <math.h>
using namespace std;

class Kiji {
    public:
        void control() {
         double E = 1.60e-19;
         int T;
         double  N[5];
                    cout << "Electron count Input 1" << endl;
                    cout << "\n_______________________________\n";
                    cout << "Input Function number: " ;
                    cin >> T;
                    cout << "\n_______________________________\n";
            switch (T) {
                case  1 :
                    cout << "Input electron count: ";
                    cin >> N[0];
                    cout << "\n_______________________________\n";
                    cout << "q: " << N[0] * E << endl;
                break;
                case 2 :
                    
            }

    }
};

int main () {
    Kiji Ki1;
    Ki1.control();
       return 0;
}