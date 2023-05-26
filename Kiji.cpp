#include <iostream>
#include <math.h>
using namespace std;

class Kiji {
    public:
        void control() {
         double E = 1.60e-19;
         int T;
         double K = 9e9;
         double  N[20];
                    cout << "Electron count Input 1" << endl;
                    cout << "\n_______________________________\n";
                    cout << "Force of electron Input 2" << endl;
                    cout << "\n_______________________________\n";
                    cout << "Sum of force at right angles Input 3" << endl;
                    cout << "\n_____________________________________\n";
                    cout << "Eletric field (F/Q) Input 4" << endl;
                    cout << "\n_____________________________________\n";
                    cout << "Eletric field (KQ/R^2) Input 5" << endl;
                    cout << "\n_____________________________________\n";
                    cout << "Eletric field (V/D) Input 6" << endl;
                    cout << "\n_____________________________________\n";
                    cout << "Electric potential difference (Ep/q) Input 7" << endl;
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
                N[8]= sqrt (N[7]);
                 cout << "F: " << N[8] << " N" << endl;
                break;
                case 4 : 
                    cout << "Force: ";
                    cin >> N[9];
                    cout << "Q: ";
                    cin >> N[10];
                    cout << "Electric field: " << N[9] / N[10] << " N/C" << endl;
                break;
                case 5 : 
                    cout << "Input r(m): ";
                    cin >> N[11];
                    cout << "Input Q: ";
                    cin >> N[12];
                N[13]=pow(N[11],2);
                    cout << "Electric field: " << K * N[12] /N[13] << " N/C" << endl;
                break;
                case 6 :
                    cout << "Input V: ";
                    cin >> N[14];
                    cout << "Input D(m): ";
                    cin >> N[15];
                    cout << "Electric field: " << N[14] / N[15] << " V/m" << endl;
                break;
                case 7 :
                    cout << "Input Gravitational Potential Energy: ";
                    cin >> N[16];
                    cout << "Input q: ";
                    cin >> N[17];
                    cout << "Electric potential difference" << N[16] / N[17] << " V" << endl;
                break;
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