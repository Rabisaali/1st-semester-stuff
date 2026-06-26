#include <iostream>
using namespace std;
int main () {
    char choice;
    double C1, C2, C3;
    double Ceq;
    cout << "To calculate equivalent capacitance for parallel combination enter P\nTo calculate equivalent capacitance for series combination enter S\n";
    cin >> choice;
    cout << "Enter the value of capacitance for capacitor 1:";
    cin >> C1;
    cout << "Enter the value of capacitance for capacitor 2:";
    cin >> C2;
    cout << "Enter the value of capacitance for capacitor 3:";
    cin >> C3;
    switch (choice) {
        case 'P':
            Ceq = C1+C2+C3;
            cout << "The equivalent capacitance is : "<< Ceq << endl;
            break;
        case 'S': 
            Ceq = (C1*C2*C3)/((C2*C3)+(C1*C3)+(C1*C2));
            cout << "The equivalent capacitance is : "<< Ceq << endl;
            break;
        default:
            cout << "Enter a valid choice";
    }
    return 0;
}
