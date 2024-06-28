#include "iostream"
#include "iomanip"

using namespace std;

int main() 
{
    double A = 0.0;
    double B = 0.0;
    double C = 0.0;
    double pi = 3.14159;

    cin >> A >> B >> C;

    cout << fixed << setprecision(3) << "TRIANGULO: " << (A * C) / 2 << endl;
    cout << fixed << setprecision(3) << "CIRCULO: " << pi * (C * C) << endl;
    cout << fixed << setprecision(3) << "TRAPEZIO: " << ((A + B) * C) / 2 << endl;
    cout << fixed << setprecision(3) << "QUADRADO: " << B * B << endl;
    cout << fixed << setprecision(3) << "RETANGULO: " << A * B << endl;

    return 0;
}