#include <iostream>
#include <math.h>
using namespace std;

class Kiji {
    public:
        void control() {
         double E = 1.60e-19;
         int T;
         double K = 9e9;
         double  N[10];
                    cout << "Electron count Input 1" << endl;
                    cout << "\n_______________________________\n";
                    cout << "Force of electron Input 2" << endl;
                    cout << "\n_______________________________\n";
                    cout << "Sum of force at right angles Input 3" << endl;
                    cout << "\n_____________________________________\n";
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
                     cout << "Input q1: ";
                     cin >> N[1];
                     cout << "Input q2: ";
                     cin >> N[2];
                     cout << "Input r(m): ";
                     cin >> N[3];
                N[4] = pow(N[3],2);
                     cout << "F: " << (K * N[1] * N[2]) / N[4] << "N" << endl;
                break;
                case 3 : 
                   cout << "Foce 1: ";
                   cin >> N[5];
                   cout << "Foce 2: ";
                   cin >> N[6];
                N[7]=(pow(N[5],2)) + (pow(N[6],2));
                sqrt (N[7]);
                cout << N[7] << endl;
                default : 
                    cout << "Please new input number" << endl;
                    
            }
                    cout << "\n_______________________________\n";
                    cout << "End program" << endl;
                    cout << "_________________________________\n"; 
    }
}; 

int main () {
    Kiji Ki1;
    Ki1.control();
       return 0;
}
/*ถ้ามียกกำลังของ 10 ให้ใส่ตัว e ตามด้วยเลขยกกำลัง เช่น 1e+5 = 1 คูณ ( 10 ยกกำลัง 5 )*/